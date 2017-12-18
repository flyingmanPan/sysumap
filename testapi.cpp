#include "map.h"

int main(void) {
    string url = "data1.txt";
    map obj;
    cout << obj.ReadFromFile(url);
    //obj.init();
    //obj.WriteToFile(url);
	//obj.test_print();
    //obj.z_test();
    cout<<obj.getX(1);

    auto point=obj.getP(1);
    cout<<point->x;

    return 0;
}