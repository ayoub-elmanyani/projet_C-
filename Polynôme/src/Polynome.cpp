#include "Polynome.h"

Polynome::Polynome() {
    this->order = 0;
    this->A = new double[1];
    this->A[0] = 1;
}

Polynome::Polynome(int order) {
    this->order = order;
    this->A = new double[this->order + 1];
    for (int i = 0; i < this->order + 1; i++)
        this->A[i] = 0;
}

Polynome::Polynome(int order, double *A) {
    this->order = order;
    this->A = new double[this->order + 1];
    for (int i = 0; i < this->order + 1; i++)
        this->A[i] = A[i];
}

Polynome::Polynome(const Polynome &polynome) {
    this->order = polynome.order;
    this->A = new double[this->order + 1];
    for (int i = 0; i < this->order + 1; i++)
        this->A[i] = polynome.A[i];
}

Polynome::~Polynome() {
    delete this->A;
}

Polynome Polynome::operator = (const Polynome &polynome) {
    this->order = polynome.order;
    delete this->A;
    this->A = new double[this->order + 1];
    for (int i = 0; i < this->order + 1; i++)
        this->A[i] = polynome.A[i];
    return *this;
}

double Polynome::operator [] (unsigned i) const {
    return this->A[i];
}


Polynome Polynome::operator + (const Polynome &polynome) const {
    int order = std::max(this->order, polynome.order);
    if (this->order == polynome.order)
        while (this->A[order] == polynome.A[order])
            order--;
    Polynome p = Polynome(order);
    for (int i = 0; i < order + 1; i++)
        p.A[i] = this->A[i] + polynome.A[i];
    return p;
}

Polynome Polynome::operator - (const Polynome &polynome) const {
    return *this + (polynome * -1);
}

Polynome Polynome::operator * (const Polynome &polynome) const {
    int order = this->order + polynome.order;
    Polynome p = Polynome(order);
    for (int i = 0; i < this->order + 1; i++) {
        for (int j = 0; j < polynome.order + 1; j++) {
            p.A[i + j] += this->A[i] * polynome.A[j];
        }
    }
    return p;
}

Polynome Polynome::operator * (double c) const {
    Polynome p = Polynome(*this);
    for (int i = 0; i < this->order + 1; i++)
        p.A[i] *= c;
    return p;
}

Polynome Polynome::operator += (const Polynome &polynome) {
    Polynome p = *this + polynome;
    this->order = p.order;
    for (int i = 0; i < this->order + 1; i++)
        this->A[i] = p.A[i];
    return *this;
}

Polynome Polynome::operator *= (const Polynome &polynome) {
    Polynome p = *this * polynome;
    this->order = p.order;
    for (int i = 0; i < this->order + 1; i++)
        this->A[i] = p.A[i];
    return *this;
}

int Polynome::getOrder() const {
        return this->order;
          }

double Polynome::value(double x) const {
    double result = 0;
    for (int i = 0; i < this->order + 1; i++)
        result += this->A[i] * pow(x, i); /* pow pour calculer la puissance , elle est dans la bibliothèque cmath */
    return result;
}

Polynome Polynome::deriv() const {
    Polynome p = Polynome(this->order - 1);
    for (int i = 0; i < this->order; i++) {
        p.A[i] = (i + 1) * this->A[i + 1];
    }
    return p;
}

void Polynome::disp() const {
    for (int i = this->order; i >= 0; i--) {
        if (i!=0)
            std::cout << this->A[i] << "x^" << i << " + ";
        else
            std::cout << this->A[i] << std::endl;
    }
}
