#include <iostream>
#include "polynome.h"

Polynome::Polynome() = default;

Polynome::~Polynome() = default;

Polynome::Polynome(double a, double b, double c) : a_(a), b_(b), c_(c) {}


Polynome::Polynome(const Polynome &a) {
    this->a_ = a.a_;
    this->b_ = a.b_;
    this->c_ = a.c_;
}

double Polynome::byPoint(Polynome eq, double x) {
    return eq.a_*pow(x, 2) + eq.b_*x + eq.c_;
}

int Polynome::rootsAmount(Polynome &eq) {
    double discriminant;
    discriminant = pow(eq.b_, 2) - 4 * eq.a_ * eq.c_;
    if (discriminant > 0)
        return 2;
    if (discriminant == 0)
        return 1;
    if (discriminant < 0)
        return 0;
}

void Polynome::roots(Polynome eq, double root1, double root2) {
    double discriminant = pow(eq.b_, 2) - 4 * eq.a_ * eq.c_;
    if (rootsAmount(eq) == 2) {
        root1 = (eq.b_*(-1) - discriminant)/(2 * eq.a_);
        root2 = (eq.b_*(-1) - discriminant)/(2 * eq.a_);
    }
    if (rootsAmount(eq) == 1) {
        root1 = (eq.b_*(-1))/(2 * eq.a_);
        root2 = (eq.b_*(-1))/(2 * eq.a_);
    }

    if (rootsAmount(eq) == 0) {
        root1 = 0;
        root2 = 0;
    }
}

void Polynome::maxMin(Polynome eq, double min, double max) {
    bool upward;
    if (eq.a_ < 0)
        upward = false;
    else
        upward = true;

    if (upward) {
        min = (4 * eq.a_ * eq.c_ - pow(eq.b_, 2)) / 4 * eq.a_;
        max = MAXFLOAT;
    }
    else {
        max = (4 * eq.a_ * eq.c_ - pow(eq.b_, 2)) / 4 * eq.a_;
        min = (-1) *MAXFLOAT;
    }

}

void Polynome::printPolynome(Polynome eq) {
    std::cout << eq.a_ << "*x^2 + " << eq.b_ << "*x + " << eq.c_<< " = 0";
}


