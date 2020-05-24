#include <iostream>
#include "Array.h"
#include "MaxElement.h"
#include "Exception.h"

using namespace std;

int main() {
    int N;

    // Max element

    cout << "Enter the amount of elements in the array: ";
    cin >> N;

    int array[N];
    for (int i = 0; i < N; i++)
        cin >> array[i];

    cout << "\n" << "The biggest number in your array is: " << maxElement(array, N);


    // Array of type T

    int index;

    // array of integer
    cout << "\n" << "Enter the amount of elements in the array: ";
    cin >> N;
    Array<int> arrayInt(N);
    cout << "\n" << "Initialize the array: ";
    arrayInt.fill();
    cout << "\n" << "Enter the index of an element you want to get: ";
    cin >> index;
    try {
        cout << "\n" << arrayInt[index];
    } catch (Exception& exception) {
        cout << "\n" << exception.what();
        exit(1);
    }
    arrayInt.show();

    // array of double
    cout << "\n" << "Enter the amount of elements in the array: ";
    cin >> N;
    Array<double> arrayDouble(N);
    cout << "\n" << "Initialize the array: ";
    arrayDouble.fill();
    cout << "\n" << "Enter the index of an element you want to get: ";
    cin >> index;
    try {
        cout << "\n" << arrayDouble[index];
    } catch (Exception& exception) {
        cout << "\n" << exception.what();
        exit(1);
    }
    arrayDouble.show();


    return 0;

}