#pragma once

template <typename T>

T maxElement(T* array, T N) {
    T max = array[0];
    for (int i = 0; i < N; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}
