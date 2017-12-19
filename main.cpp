#include "map.h"

int main(void) {
    string url = "data.txt";
    Map obj;
    cout << obj.ReadFromFile(url);
    //obj.init();
    obj.WriteToFile(url);
	//obj.test_print();
    return 0;
}
