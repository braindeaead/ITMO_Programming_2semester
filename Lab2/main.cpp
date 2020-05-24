#include <iostream>
#include "polynome.h"

int main() {
    // first task
    std::cout << "enter polynome's coefficients and X" << std::endl;
    double a, b, c, x;
    std::cin >> a >> b >> c >> x;
    Polynome first(a, b, c);
    std::cout << std::endl << first.byPoint(first, x) << std::endl;

    // second task
    std::cout << "enter polynome's coefficients" << std::endl;
    std::cin >> a >> b >> c;
    Polynome second(a, b, c);
    std::cout << std::endl << second.rootsAmount(second) << std::endl;

    // third task
    std::cout << "enter polynome's coefficients" << std::endl;
    std::cin >> a >> b >> c;
    double root1, root2;
    Polynome third(a, b, c);
    third.roots(third, root1, root2);
    std::cout << std::endl << root1 << ' ' << root2 << std::endl;

    // fourth task
    std::cout << "enter polynome's coefficients" << std::endl;
    std::cin >> a >> b >> c;
    double max = 0, min = 0;
    Polynome fourth(a, b, c);
    fourth.maxMin(fourth, min, max);
    std::cout << std::endl << "max = " << max << " min = " << min << std::endl;

    //fifth task
    fourth.printPolynome(fourth);


    return 0;
}