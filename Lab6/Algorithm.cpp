#include <iterator>

template <typename range, typename object>
bool all_of(range begin, range end, bool (&pred)(object)) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if (!pred(*it)) {
            return false;
        }
    }
    return true;
}

template <typename range, typename object>
bool one_of(range begin, range end, bool (&pred)(object)) {
    int counter = 0;
    for (auto it = begin; it != end; it = std::next(it)) {
        if (pred(*it))
            counter++;
    }
    return (counter == 1);
}

template <typename range, typename object>
object find_backward(range begin, range end, object obj) {
    for (auto it = end; it != begin; it = std::prev(it)) {
        if((*it) == obj)
            return obj;
    }
    return object();
}