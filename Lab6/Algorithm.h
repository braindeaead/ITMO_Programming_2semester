#pragma once

template <typename range, typename object>
bool all_of(range, range, bool (&pred)(object));
template <typename range, typename object>
bool one_of(range, range, bool (&pred)(object));
template <typename range, typename object>
object find_backward(range, range, object);


#include "Algorithm.cpp"