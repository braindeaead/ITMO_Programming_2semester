#include "procedure.h"

void rounder(double &n) {
    n = round(n);
}

void rounderPoint(double *n) {
    *n = round(*n);
}

void change(int &a, int &b) {
    int swap;
    swap = a;
    a = b;
    b = swap;
}

void changePoint(int *a, int *b) {
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

void multiply(complex& number, double& num) {
    number.re *= num;
    number.im *= num;
}
void multiplyPointer(complex* number, double* num) {
    number->re *= *num;
    number->im *= *num;
}

matrix::matrix(int array[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            elements[i][j] = array[i][j];
        }
    }
}

matrix::matrix(){
}

void trans(matrix& m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
          std::swap(m.elements[i][j], m.elements[j][i]);
        }
    }
}

void transPoint(matrix* m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            std::swap(m->elements[i][j], m->elements[j][i]);
        }
    }
}

