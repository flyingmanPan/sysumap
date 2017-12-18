#include "map.h"

int main(void) {
    string url = "data1.txt";
    map obj;
    cout << obj.ReadFromFile(url);
    //obj.init();
    //obj.WriteToFile(url);
	//obj.test_print();
    obj.z_test();
    return 0;
}