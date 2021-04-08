#ifndef TRIMAT_H
#define TRIMAT_H

#include <iostream>
#include <iomanip>

class TriMat
{
    public:
        TriMat(unsigned dim);
        TriMat(unsigned dim, double** E);
        TriMat(TriMat const &triMat);
        ~TriMat();
        TriMat operator = (TriMat const &triMat);
        double* operator [] (unsigned index);
        TriMat operator + (TriMat const &triMat);
        TriMat operator * (TriMat const &triMat);
        TriMat operator * (double x);
        double trace();
        double* diag();
        double det();
        double* SolEq(double *c);
        void disp();
        void setAt(unsigned i, unsigned j, double e);

    private:
        unsigned dim;
        double** E;
};

#endif // TRIMAT_H
