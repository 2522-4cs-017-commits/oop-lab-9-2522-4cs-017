#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class DynamicArray {
private:
    T* data;
    int count;
    int capacity;
    T invalidItem;

    void grow();

public:
    DynamicArray(int cap = 2);
    ~DynamicArray();

    void add(const T& value);
    bool removeAt(int index);
    T& operator[](int index);
    int size() const;
    bool isEmpty() const;
};

template <typename T>
DynamicArray<T>::DynamicArray(int cap) {
    data = nullptr;
    count = 0;
    capacity = cap;
}

template <typename T>
DynamicArray<T>::~DynamicArray() {}

template <typename T>
void DynamicArray<T>::grow() {}

template <typename T>
void DynamicArray<T>::add(const T& value) {}

template <typename T>
bool DynamicArray<T>::removeAt(int index) { return false; }

template <typename T>
T& DynamicArray<T>::operator[](int index) { return invalidItem; }

template <typename T>
int DynamicArray<T>::size() const { return 0; }

template <typename T>
bool DynamicArray<T>::isEmpty() const { return true; }

#endif
