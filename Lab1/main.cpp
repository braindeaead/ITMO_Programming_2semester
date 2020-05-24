#include <iostream>
#include "procedure.h"

using namespace std;

int main() {

    double num;
    cin >> num;
    rounder(num);
    cout << (num) << "\n";
    cin >> num;
    rounderPoint(&num);
    cout << num << "\n";

    int a, b;
    cin >> a >> b;
    change(a, b);
    cout << a << " " << b << "\n";
    cin >> a >> b;
    changePoint(&a, &b);
    cout << "\n" << a << " " << b << "\n";

    cout << '\n';

    complex x;
    x.im = 8, x.re = 10;
    double y = 0.5;
    multiply(x, y);
    cout << x.re << "+" << x.im << "i" << '\n';
    multiplyPointer(&x, &y);
    cout << x.re << "+" << x.im << "i" << '\n';

    cout << '\n';

    matrix array;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    array = matrix(arr);
    trans(array);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array.elements[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';

    array = matrix(arr);
    transPoint(&array);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array.elements[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}