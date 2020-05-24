#include "Exception.h"

using namespace std;

Exception::Exception(const char* text_) {
    text = text_;
}

const char *Exception::what() const _NOEXCEPT {
    return text;
}