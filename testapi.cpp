#include "map.h"
#include<iostream>
using namespace std;
int main(void) {
    string url = "data1.txt";
    map obj;
    obj.ReadFromFile(url);
    //obj.init();
    //obj.WriteToFile(url);
	//obj.test_print();
    obj.z_test();

    //cout<<obj.getInfo(0);

    return 0;
}