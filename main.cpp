#include "map.h"

int main(void) {
    string url = "data.txt";
    map obj;
    //obj.ReadFromFile(url);
    obj.init();
    obj.WriteToFile(url);
    //obj.test_print();
    return 0;
}
