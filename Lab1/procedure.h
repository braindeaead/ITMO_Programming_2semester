#ifndef UNTITLED_PROCEDURE_H
#define UNTITLED_PROCEDURE_H
#include <math.h>

void rounder(double &n);
void rounderPoint(double *n);

void change(int &a, int &b);
void changePoint(int *a, int *b);

struct complex {
    double re;
    double im;
};
void multiply(complex&, double&);
void multiplyPointer(complex*, double*);

struct matrix {
    int elements[3][3];

    matrix(int[3][3]);
    matrix();
};

void trans(matrix&);
void transPoint(matrix*);
#endif //UNTITLED_PROCEDURE_H
