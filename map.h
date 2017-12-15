#include <iostream>
#include <fstream>

using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::cin;
using std::cout;

#define MAX_VERTEX 50

typedef struct vertex {
    int number;
    string name;
    string info;
    vertex(int n = 0, string str = "", string i = "") {
        number = n;
        name = str;
        info = i;
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
                    delete adjacency_matrix[i][j];
                    delete adjacency_matrix[j][i];
                }
            }
            if(vertex_list[i] != nullptr)
                delete vertex_list[i];
        }
    }

    // 测试用的函数，用来初始化数据
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
        adjacency_matrix[4][1] = new edge(24);
        adjacency_matrix[1][4] = adjacency_matrix[4][1];
        adjacency_matrix[2][3] = new edge(11,1,0);
        adjacency_matrix[3][2] = adjacency_matrix[2][3];
        adjacency_matrix[2][4] = new edge(25);
        adjacency_matrix[4][2] = adjacency_matrix[2][4];
        adjacency_matrix[3][4] = new edge(23,1,1);
        adjacency_matrix[4][3] = adjacency_matrix[3][4];

        return;
    }

    bool ReadFromFile(string url) {
        // 打开数据文档
        ifstream file;
        file.open(url);

        //处理数据并存储
        string temp = "";
        char c = 0;
        file >> temp >> vertex_num >> temp;
        for(int i = 0; i < vertex_num; i++) {
            vertex_list[i] = new vertex;
            file >> vertex_list[i]->number;
            cout << vertex_list[i]->number;
            getline(file, vertex_list[i]->name);
            cout << vertex_list[i]->name;
            getline(file, vertex_list[i]->info);
            file >> c >> c;
        }
    }
    bool WriteToFile(string url) {
        // 打开数据文档
        ofstream file;
        file.open(url);

        // 写入数据
        file << "vertex_num: " << vertex_num << endl << endl
             << "vertex_list(number,name,info):" << endl << endl;
        for(int i = 0; i < vertex_num; i++) {
            file << vertex_list[i]->number << endl
                 << vertex_list[i]->name << endl
                 << vertex_list[i]->info << endl << endl;
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

    void test_print() {
        cout << "vertex_num: " << vertex_num << endl
             << "edge_num: " << edge_num << endl << endl;
        for(int i = 0; i < vertex_num; i++) {
            cout << vertex_list[i]->number << " " << vertex_list[i]->name;
        }
        for(int i = 0; i < vertex_num; i++) {
            for(int j = i; j < vertex_num; j++) {
                if(adjacency_matrix[i][j] != nullptr) {
                    cout << i <<" "<< j <<" ";
                    cout << adjacency_matrix[i][j]->weight << endl;
                }
            }
        }
    }

private:
    //const int MAX_VERTEX = 50;  //最大结点数量
    int vertex_num;             //结点数量
    int edge_num;               //边数量

    // 邻接矩阵，两点相通则有对应位置的edge指针有值，其余全为 nullptr
    edge* adjacency_matrix[MAX_VERTEX][MAX_VERTEX];

    // 结点数组，有新的点则new一个新值
    vertex* vertex_list[MAX_VERTEX];
};
