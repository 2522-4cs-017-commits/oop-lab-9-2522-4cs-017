#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // default values are needed because DynamicArray uses new T[...]
    Product(string n = "", double p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }

    double stockValue() const {
        return price * quantity;
    }

};

#endif
