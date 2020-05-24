#include <iostream>
#include "Algorithm.h"
#include <vector>
template <typename obj>
bool predZer(obj object) {
    return (object > 0);
}

template <typename obj>
bool predEven(obj object) {
    return (object % 2 == 0);
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 4};

    std::cout << (all_of(array.begin(), array.end(), predZer<int>) ? "true" : "false") << std::endl;
    std::cout << (one_of(array.begin(), array.end(), predEven<int>) ? "true" : "false")<< std::endl;
    std::cout << find_backward(array.begin(), array.end(), 4);
    return 0;
}