#include <iostream>

using namespace std;

class IntList {
private:
    int* data;
    int count;
    int capacity;

    void grow() {
        int oldCapacity = capacity;
        capacity *= 2;
        int* newData = new int[capacity];

        for (int i = 0; i < count; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;

        cout << "Resizing: " << oldCapacity << " -> " << capacity << endl;
    }

public:
    IntList() {
        capacity = 2;
        count = 0;
        data = new int[capacity];
    }

    ~IntList() {
        delete[] data;
        cout << "IntList memory freed" << endl;
    }

    void add(int value) {
        if (count == capacity) {
            grow();
        }
        data[count++] = value;
    }

    int get(int index) {
        if (index < 0 || index >= count) {
            cout << "Invalid index " << index << endl;
            return -1;
        }
        return data[index];
    }

    int size() {
        return count;
    }

    void print() {
        cout << "List (" << count << "/" << capacity << "): ";
        for (int i = 0; i < count; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    IntList list;

    for (int val = 10; val <= 60; val += 10) {
        list.add(val);
    }

    list.print();

    int val3 = list.get(3);
    if (val3 != -1) {
        cout << "Item at 3: " << val3 << endl;
    }

    int val10 = list.get(10);
    if (val10 != -1) {
        cout << "Item at 10: " << val10 << endl;
    }

    cout << "Size: " << list.size() << endl;

    return 0;
}