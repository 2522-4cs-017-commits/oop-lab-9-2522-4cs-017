#include <iostream>
#include <string>
#include "DynamicArray.h"

using namespace std;

int main() {
    DynamicArray<int> arr;
    arr.add(10);
    arr.add(20);
    arr.add(30);
    arr.add(40);
    arr.add(50);

    cout << "Size: " << arr.size() << endl;

    arr.removeAt(1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[0] = 99;
    cout << "First: " << arr[0] << endl;

    arr[7];

    DynamicArray<string> strArr;
    strArr.add("template works");
    cout << strArr[0] << endl;

    return 0;
}
