#pragma once
#include <cmath>

class Polynome {

    private:
        float a_{};
        float b_{};
        float c_{};

    public:
        Polynome();

        ~Polynome();

        Polynome(double, double, double);

        Polynome(const Polynome &);

        double byPoint(Polynome, double );

        int rootsAmount(Polynome &);

        void roots(Polynome, double, double);

        void maxMin(Polynome, double, double);

        void printPolynome(Polynome);

};
