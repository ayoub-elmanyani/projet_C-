#ifndef POLYNOME_H
#define POLYNOME_H

#include <iostream>
#include <cmath> /* bibliothèque pour pow */

class Polynome {
    public:
        Polynome();
        Polynome(int order);
        Polynome(int order, double *A);
        Polynome(const Polynome &polynome);
        ~Polynome();
        Polynome operator = (const Polynome &polynome);
        double operator [] (unsigned i) const;
        Polynome operator + (const Polynome &polynome) const;
        Polynome operator - (const Polynome &polynome) const;
        Polynome operator * (const Polynome &polynome) const;
        Polynome operator * (double c) const;
        Polynome operator += (const Polynome &polynome);
        Polynome operator *= (const Polynome &polynome);
        int getOrder() const;
        double value(double x) const;
        Polynome deriv() const;
        void disp() const;

    private:
        int order;
        double *A;
};

#endif
