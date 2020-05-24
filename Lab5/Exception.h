#pragma once
#include <exception>
#include <string>

using namespace std;

class Exception : public exception {
private:
    const char* text;
public:
    Exception(const char*);
    virtual const char* what() const _NOEXCEPT override ;
};

