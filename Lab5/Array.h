#pragma once

#include <iostream>
#include "Exception.h"

using namespace std;

template <class T>

class Array {
private:
    int length;
    T* elements;
public:
    Array() {
        length = 0;
        elements = nullptr;
    };

    Array(int N) {
        length = N;
        elements = new T[length];
    };

    ~Array() = default;

    void fill() {
        for (int i = 0; i < length; i++)
            cin >> elements[i];
    };

    void show() {
        for (int i = 0; i < length; i++)
            cout << elements[i] << " ";
    }

    T operator[](int i) {
        if (i < 0 || i >= length)
            throw Exception("Index out of range!");
        return elements[i];
    }

};
