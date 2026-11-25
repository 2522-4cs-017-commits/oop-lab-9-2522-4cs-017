#include <iostream>
#include "Product.h"
#include "DynamicArray.h"
#include "Algorithms.h"
using namespace std;

int main() {
    // 1. Test the Product operators
    Product pen("Pen", 50, 100);
    Product bag("Bag", 900, 10);
    Product pen2("Pen", 60, 5);

    cout << pen << endl;
    cout << bag << endl;
    cout << "Pen < Bag (by price)? " << (pen < bag) << endl;
    cout << "Pen == Pen (by name)? " << (pen == pen2) << endl;

    // 2. Test the algorithms with a DynamicArray<int>
    DynamicArray<int> nums;
    nums.add(30);
    nums.add(10);
    nums.add(20);
    sortAscending(nums);
    printAll(nums);
    cout << "Max: " << maxItem(nums) << ", index of 20: " << findIndex(nums, 20) << endl;
    return 0;
}
