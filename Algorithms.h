#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <iostream>
#include "DynamicArray.h"
using namespace std;

// Prints each item numbered 1., 2., ...
template <typename T>
void printAll(DynamicArray<T>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << "  " << i + 1 << ". " << arr[i] << endl;
    }
}

// Index of the first item == value, or -1
template <typename T>
int findIndex(DynamicArray<T>& arr, const T& value) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

// Bubble sort, using only <
template <typename T>
void sortAscending(DynamicArray<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j + 1] < arr[j]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Largest item, using only >
template <typename T>
T maxItem(DynamicArray<T>& arr) {
    if (arr.isEmpty()) {
        return T();
    }
    T best = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > best) {
            best = arr[i];
        }
    }
    return best;
}

#endif
