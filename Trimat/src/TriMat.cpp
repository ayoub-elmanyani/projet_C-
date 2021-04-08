#include "TriMat.h"

TriMat::TriMat(unsigned dim) {
    this->dim = dim;
    this->E = new double*[this->dim];
    for (int i = 0; i < this->dim; i++) {
        this->E[i] = new double[this->dim];
        for (int j = 0; j < this->dim; j++) {
            this->E[i][j] = 0;
        }
    }
}

TriMat::TriMat(unsigned dim, double** E) {
    this->dim = dim;
    this->E = new double*[this->dim];
    for (int i = 0; i < this->dim; i++) {
        this->E[i] = new double[this->dim];
        for (int j = 0; j < this->dim; j++) {
            this->setAt(i, j, E[i][j]);
        }
    }
}

TriMat::TriMat(TriMat const &triMat) {
    this->dim = triMat.dim;
    this->E = new double*[this->dim];
    for (int i = 0; i < this->dim; i++) {
        this->E[i] = new double[this->dim];
        for (int j = 0; j < this->dim; j++) {
            this->setAt(i, j, E[i][j]);
        }
    }
}

TriMat::~TriMat() {
    for(int i = 0; i < this->dim; i++)
        delete[] this->E[i];
    delete[] this->E;
}

TriMat TriMat::operator = (TriMat const &triMat) {
    return TriMat(triMat);
}

double* TriMat::operator [] (unsigned index) {
    return this->E[index];
}

TriMat TriMat::operator + (TriMat const &triMat) {
    TriMat res = TriMat(*this);
    for (int i = 0; i < this->dim; i++) {
        for (int j = 0; j < this->dim; j++) {
            res.setAt(i, j, res.E[i][j] + triMat.E[i][j]);
        }
    }
    return res;
}

TriMat TriMat::operator * (TriMat const &triMat) {
    TriMat res = TriMat(this->dim);
    for (int i = 0; i < this->dim; i++) {
        for (int j = 0; j < this->dim; j++) {
            double tmp = 0;
            for (int k = 0; k < this->dim; k++)
                tmp += this->E[i][k] * triMat.E[k][j];
            res.E[i][j] = tmp;
        }
    }
    return res;
}

TriMat TriMat::operator * (double x) {
    TriMat res = TriMat(*this);
    for (int i = 0; i < this->dim; i++) {
        for (int j = 0; j < this->dim; j++) {
            res.setAt(i, j, E[i][j] * x);
        }
    }
    return res;
}

double TriMat::trace() {
    double res = 0;
    for (int i = 0; i < this->dim; i++)
        res += this->E[i][i];
    return res;
}

double* TriMat::diag() {
    double* res = new double[this->dim];
    for (int i = 0; i < this->dim; i++)
        res[i] = this->E[i][i];
    return res;
}

double TriMat::det() {
    double res = 1;
    for (int i = 0; i < this->dim; i++)
        res *= this->E[i][i];
    return res;
}

double* TriMat::SolEq(double *c) {
    double* res = new double[this->dim];
    for (int i = 0; i < this->dim; i++) {
        res[i] = c[i] / this->E[i][i];
        for (int j = i + 1; j < this->dim; j++)
            c[j] -= res[i] * this->E[j][i];

    }
    return res;
}

void TriMat::disp() {
    std::cout.fill(' ');
    for (int i = 0; i < this->dim; i++) {
        for (int j = 0; j < this->dim; j++) {
            std::cout << std::setw(3) << this->E[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void TriMat::setAt(unsigned i, unsigned j, double e) {
    if (j <= i)
        this->E[i][j] = e;
}
