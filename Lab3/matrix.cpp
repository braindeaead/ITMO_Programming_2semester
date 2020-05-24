#include <iostream>
#include "matrix.h"

matrix::matrix(float arr[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            _array[i][j] = arr[i][j];
}

matrix operator*(matrix &arr1, matrix &arr2) {
    float array[3][3];
    array[0][0] = arr1._array[0][0] * arr2._array[0][0];
    array[0][1] = arr1._array[0][1] * arr2._array[1][0];
    array[0][2] = arr1._array[0][2] * arr2._array[2][0];

    array[1][0] = arr1._array[1][0] * arr2._array[0][1];
    array[1][1] = arr1._array[1][1] * arr2._array[1][1];
    array[1][2] = arr1._array[1][2] * arr2._array[2][1];

    array[2][0] = arr1._array[2][0] * arr2._array[0][2];
    array[2][1] = arr1._array[2][1] * arr2._array[1][2];
    array[2][2] = arr1._array[2][2] * arr2._array[2][2];
    return matrix(array);
}

matrix operator*(matrix &arr, float n) {
    float array[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = array[i][j] * n;
        }
    }
    return matrix(array);
}

matrix operator+(matrix &arr1, matrix &arr2) {
    float array[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            array[i][j] = arr1._array[i][j] + arr2._array[i][j];

    return matrix(array);
}

matrix operator-(matrix &arr1, matrix &arr2) {
    float array[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            array[i][j] = arr1._array[i][j] - arr2._array[i][j];
    return matrix(array);
}

bool operator==(matrix &arr1, matrix &arr2) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr1._array[i][j] != arr2._array[i][j])
                return false;
    return true;
}

bool operator!=(matrix &arr1, matrix &arr2) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr1._array[i][j] != arr2._array[i][j])
                return true;
    return false;
}

bool operator>(matrix &arr1, matrix &arr2) {
    float sum1, sum2;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            sum1 += arr1._array[i][j];
            sum2 += arr2._array[i][j];
        }

    return (sum1 > sum2);
}

bool operator<(matrix &arr1, matrix &arr2) {
    float sum1, sum2;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            sum1 += arr1._array[i][j];
            sum2 += arr2._array[i][j];
        }
    return (sum1 < sum2);
}

void matrix::printMatrix(matrix &arr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr._array[i][j] << ' ';
        }
        std::cout << std::endl;
    }

}


