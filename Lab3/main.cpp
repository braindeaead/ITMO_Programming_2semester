#include <iostream>
#include "matrix.h"
#include "fifo.h"

int main() {
    // task 4
    float arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    matrix mat1(arr);
    float arr1[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    matrix mat2(arr1);

    matrix mat3 = mat1 * mat2;
    matrix::printMatrix(mat3);

    float n = 3.56;
    mat3 = mat3 * n;
    matrix::printMatrix(mat3);

    mat3 = mat1 - mat2;
    matrix::printMatrix(mat3);

    mat3 = mat1 + mat2;
    matrix::printMatrix(mat3);

    bool isTrue = mat1 == mat2;
    std::cout << isTrue << std::endl;

    isTrue = mat1 != mat2;
    std::cout << isTrue << std::endl;

    isTrue = mat1 > mat2;
    std::cout << isTrue << std::endl;

    isTrue = mat1 < mat2;
    std::cout << isTrue << std::endl;

    //task 8
    int q[100];
    q[0] = 1; q[1] = 2; q[2] = 3; q[3] = 4; q[4] = 5;
    int k = 99;
    fifo queue(q);
    queue = queue << k;

    k = queue >> k;
    std::cout << k;

    return 0;
}