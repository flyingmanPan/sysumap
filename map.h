#include <iostream>
#include <fstream>
#include <vector>

using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::cout;
using std::vector;

#define MAX_VERTEX 50

typedef struct vertex {
    int number;
    string name;
    string info;
    bool is_scene;
    int x;
    int y;
    vertex(int n = 0, string str = "", string i = "", bool s = true) {
        number = n;
        name = str;
        info = i;
        is_scene = s;
    }
} vertex;

typedef struct edge {
    int weight;
    bool is_pavement;
    bool is_driveway;
    edge(int w = 0, bool p = false, bool d = false) {
        weight = w;
        is_pavement = p;
        is_driveway = d;
    }
} edge;

class map {
public:
    map(): vertex_num(0), edge_num(0) {
        for(int i = 0; i < MAX_VERTEX; i++) {
            for(int j = 0; j < MAX_VERTEX; j++) {
                adjacency_matrix[i][j] = nullptr;
            }
            vertex_list[i] = nullptr;
        }
    }
    ~map() {
        for(int i = 0; i < vertex_num; i++) {
            for(int j = i; j < vertex_num; j++) {
                if(adjacency_matrix[i][j] != nullptr) {
                    adjacency_matrix[i][j] = nullptr;
                    delete adjacency_matrix[j][i];
                }
            }
            if(vertex_list[i] != nullptr)
                delete vertex_list[i];
        }
    }

    bool ReadFromFile(string url) {
        // 打开数据文档
        ifstream file;
        file.open(url);
        //打开文档失败，返回false
        if(!file)
            return false;

        //处理数据并存储，最终返回true
        string temp = "";
        int pos1 = 0;
        int pos2 = 0;
        /*
        file >> temp >> vertex_num >> temp;
        
        for(int i = 0; i < vertex_num; i++) {
            vertex_list[i] = new vertex;
            file >> vertex_list[i]->number;
            getline(file, temp);
            getline(file, vertex_list[i]->name);
            getline(file, vertex_list[i]->info);
            file >> vertex_list[i]->is_scene;
        }
        */


        /*
        --------------ZZZZZZZ---------------
            modify the old reading function,
            read all info in only one row,
            if the last signal is true which means there is extra info, 
            read the next line as infomation



        */
        file >> temp >> vertex_num;
        for(int i = 0; i < vertex_num; i++) {
            vertex_list[i] = new vertex;
            file >> vertex_list[i]->number;
            file >> vertex_list[i]->x;
            file >> vertex_list[i]->y;
            file >> vertex_list[i]->is_scene;
            if(vertex_list[i]->is_scene)
            {
                getline(file,temp);
                getline(file, vertex_list[i]->name);
            }
        }
        
        file >> temp >> edge_num >> temp;
        
        for(int i = 0; i < edge_num; i++) {
            file >> pos1 >> pos2;
            adjacency_matrix[pos1][pos2] = new edge;
            file >> adjacency_matrix[pos1][pos2]->weight
                 >> adjacency_matrix[pos1][pos2]->is_pavement
                 >> adjacency_matrix[pos1][pos2]->is_driveway;
            adjacency_matrix[pos2][pos1] = adjacency_matrix[pos1][pos2];
        }
        file.close();
        return true;
    }
    bool WriteToFile(string url) {
        // 打开数据文档
        ofstream file;
        file.open(url);

        // 写入数据
        file << "vertex_num: " << vertex_num << endl << endl
             << "vertex_list(number,name,info,scene?):" << endl << endl;
        for(int i = 0; i < vertex_num; i++) {
            file << vertex_list[i]->number << endl
                 << vertex_list[i]->name << endl
                 << vertex_list[i]->info << endl
                 << vertex_list[i]->is_scene << endl << endl;
        }
        file << "edge_num: " << edge_num << endl << endl
             << "edge_list(vertex1,vertex2,weight,pavement?driveway?):" << endl;
        for(int i = 0; i < vertex_num; i++) {
            for(int j = i; j < vertex_num; j++) {
                if(adjacency_matrix[i][j] != nullptr) {
                    edge* pointer = adjacency_matrix[i][j];
                    file << i <<" "<< j <<" "<< pointer->weight <<" "
                         << pointer->is_pavement <<" "<< pointer->is_driveway
                         << endl;
                }
            }
        }
        file.close();
        return true;
    }

    // 找出两点之间的最短路径，若路径不通则返回一个空的容器
    // 人行道版本
    vector<int> find_a_pavement(int start, int end) {
        auto allPath = find_all_path(start, 1);
        if(allPath[end].back() == start)
            return vector<int>();
        else
            return allPath[end];
    }
    // 车道版本
    vector<int> find_a_driveway(int start, int end) {
        auto allPath = find_all_path(start, 0);
        if(allPath[end].back() == start)
            return vector<int>();
        else
            return allPath[end];
    }

    /* 用Dijkstra算法找出起点到其余所有结点的最短路径
     * judge == 1, 找人行道路径
     * judge == 0, 找车道路径
     */
    vector<vector<int> > find_all_path(int start, bool judge) {
        // 初始化要用到的数据
        vector<vector<int> > allPath;    // 用以保存所有路径，每个vec<int>就是一条
        vector<int> temp;               // 一开始每条路径起点都是start
        temp.push_back(start);
        bool visited[vertex_num];       // 判断是否已找到结点的最短路径
        int distance[vertex_num] = {0}; // 起点到每条路径的距离长度，max为无法到达
        const int max = 1000000;
        int small_pos = start;          // 用来寻找distance数组中最小值的下标
        // 循环一下，初始化数值
        for(int i = 0; i < vertex_num; i++) {
            allPath.push_back(temp);
            if(i != start)
                allPath[i].push_back(i);
            visited[i] = false;
            if(adjacency_matrix[start][i] == nullptr)
                distance[i] = max;
            else if(judge && !adjacency_matrix[start][i]->is_pavement)
                distance[i] = max;
            else if(!judge && !adjacency_matrix[start][i]->is_driveway)
                distance[i] = max;
            else
                distance[i] = adjacency_matrix[start][i]->weight;
        }
        visited[start] = true;


        // Dijkstra算法，开始！
        for(int i = 1; i < vertex_num; i++) {
            // 先找出其它结点中距离起点最近的，而且还没visited的一个结点
            small_pos = start;
            for(int j = 0; j < vertex_num; j++) {
                if(visited[j])
                    continue;
                if(distance[j] < distance[small_pos])
                    small_pos = j;
            }
            visited[small_pos] = true;

            // 将该结点添加到所有路径中，更新所有距离，并确定该结点现在路径为最短路径
            for(int j = 0; j < vertex_num; j++) {
                if((visited[j]) || (adjacency_matrix[small_pos][j] == nullptr)
                    || (judge && !adjacency_matrix[small_pos][j]->is_pavement)
                    || (!judge && !adjacency_matrix[small_pos][j]->is_driveway))
                    continue;
                if(distance[small_pos] + adjacency_matrix[small_pos][j]->weight
                    < distance[j]) {
                    allPath[j] = allPath[small_pos];
                    allPath[j].push_back(j);
                    distance[j] = get_distance(allPath[j], judge);
                }
            }
        }
        return allPath;
    }

    // 计算一条路径的长度；judge==1:人行道；judge==0:车道
    int get_distance(const vector<int>& path, const bool& judge) {
        int distance = 0;
        for(int i = 0; i < path.size()-1; i++) {
            if(adjacency_matrix[path[i]][path[i+1]] == nullptr)
                return 0;
            else if(judge && !adjacency_matrix[path[i]][path[i+1]]->is_pavement)
                return 0;
            else if(!judge && !adjacency_matrix[path[i]][path[i+1]]->is_driveway)
                return 0;
            else
                distance += adjacency_matrix[path[i]][path[i+1]]->weight;
        }
        return distance;
    }

    // 测试用的函数
    // 用来初始化数据
    void init() {
        //init
        vertex_num = 5;
        edge_num = 6;
        for(int i = 0; i < 5; i++) {
            vertex_list[i] = new vertex;
            vertex_list[i]->number = i;
        }
        vertex_list[0]->name = "canteen 1";
        vertex_list[0]->info = "go to eat dinner!!";
        vertex_list[1]->name = "canteen 2";
        vertex_list[1]->info = "go to eat lunch!!";
        vertex_list[2]->name = "library";
        vertex_list[2]->info = "for books";
        vertex_list[3]->name = "doom";
        vertex_list[3]->info = "nothing";
        vertex_list[4]->name = "home";
        vertex_list[4]->info = "WTF?";

        adjacency_matrix[0][1] = new edge(23,0,1);
        adjacency_matrix[1][0] = adjacency_matrix[0][1];
        adjacency_matrix[0][3] = new edge(5,1,1);
        adjacency_matrix[3][0] = adjacency_matrix[0][3];
        adjacency_matrix[4][1] = new edge(24,1,1);
        adjacency_matrix[1][4] = adjacency_matrix[4][1];
        adjacency_matrix[2][3] = new edge(54,1,1);
        adjacency_matrix[3][2] = adjacency_matrix[2][3];
        adjacency_matrix[2][4] = new edge(25,1,1);
        adjacency_matrix[4][2] = adjacency_matrix[2][4];
        adjacency_matrix[3][4] = new edge(23,0,1);
        adjacency_matrix[4][3] = adjacency_matrix[3][4];

        return;
    }
    // 用以输出
    void test_print() {
        cout << "vertex_num: " << vertex_num << endl
             << "edge_num: " << edge_num << endl << endl;
        for(int i = 0; i < vertex_num; i++) {
            cout << vertex_list[i]->number << " " << vertex_list[i]->name<<endl;
        }
        cout << endl;
        for(int i = 0; i < vertex_num; i++) {
            for(int j = i; j < vertex_num; j++) {
                if(adjacency_matrix[i][j] != nullptr) {
                    cout << i <<" "<< j <<" ";
                    cout << adjacency_matrix[i][j]->weight << endl;
                }
            }
        }
        cout << endl << endl;
        vector<vector<int>> v;
        v = find_all_path(4,1);
        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < v[i].size(); j++)
                cout << v[i][j] << " ";
            cout << endl;
        }
    }

    void z_test()
    {
        //NULL
        cout << "vertex_num: " << vertex_num << endl
             << "edge_num: " << edge_num << endl << endl;
        for(int i = 0; i < vertex_num; i++) 
        {
            cout << vertex_list[i]->number << " " 
            << vertex_list[i]->x <<" " 
            << vertex_list[i]->y <<endl;
        }
        cout << endl;
        for(int i = 0; i < vertex_num; i++) 
        {
            for(int j = i; j < vertex_num; j++) 
            {
                if(adjacency_matrix[i][j] != nullptr) {
                    cout << i <<" "<< j <<" ";
                    cout << adjacency_matrix[i][j]->weight << endl;
                }
            }
        }
        cout << endl << endl;
    }


    //-----------ZZZZZ-------

    int getX(int num)
    {
        return vertex_list[num]->x;
    }
    int getY(int num)
    {
        return vertex_list[num]->y;
    }

private:
    //const int MAX_VERTEX = 50;  //最大结点数量
    int vertex_num;             //结点数量
    int edge_num;               //边数量

    /* 邻接矩阵
     * 两点相通则有对应位置的edge指针有值，其余全为 nullptr
     */
    edge* adjacency_matrix[MAX_VERTEX][MAX_VERTEX];

    // 结点数组，有新的点则new一个新值
    vertex* vertex_list[MAX_VERTEX];
};
