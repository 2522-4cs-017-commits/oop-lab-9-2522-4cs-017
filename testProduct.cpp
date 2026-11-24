#include <iostream>
#include "Product.h"
#include "Algorithms.h"

using namespace std;

int main() {
    Product p1("Pen", 50, 100);
    Product p2("Bag", 900, 10);
    Product p3("Pen", 60, 20);

    cout << p1 << endl;
    cout << p2 << endl;
    cout << "Pen < Bag (by price)? " << (p1 < p2) << endl;
    cout << "Pen == Pen (by name)? " << (p1 == p3) << endl;

    DynamicArray<int> nums;
    nums.add(30);
    nums.add(10);
    nums.add(20);

    sortAscending(nums);
    printAll(nums);

    cout << "Max: " << maxItem(nums) << ", index of 20: " << findIndex(nums, 20) << endl;

    return 0;
}
