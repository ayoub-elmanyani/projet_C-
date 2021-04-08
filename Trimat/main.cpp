#include <iostream>
#include <math.h>

#include "TriMat.h"

int main() {
    /* Test système simple. */
    std::cout << "Systeme simple" << std::endl;
    TriMat m = TriMat(3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j <= i)
                m.setAt(i, j, i + 2 * j + 1);
        }
    }
    std::cout << "A = " << std::endl;
    m.disp();
    std::cout << std::endl << "B = " << std::endl;
    double c[3] = {2, 2, 3};
    for (int i = 0; i < 3; i++)
        std::cout << c[i] << " ";
    double* x = m.SolEq(c);
    std::cout << std::endl << std::endl << "X = " << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << x[i] << " ";

      /* Test système complexe. */
    std::cout << std::endl << std::endl<< std::endl << std::endl << "Systeme complexe" << std::endl;
    TriMat n = TriMat(40);
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 40; j++) {
            if (j <= i)
                n.setAt(i, j, pow(-1, i - j));
        }
    }
    std::cout << "A = " << std::endl;
    n.disp();
    std::cout << std::endl << "B = " << std::endl;
    double d[40];
    for (int i = 0; i < 40; i++) {
        d[i] = i;
        std::cout << d[i] << " ";
    }
    x = n.SolEq(d);
    std::cout << std::endl << std::endl << "X = " << std::endl;
    for (int i = 0; i < 40; i++)
        std::cout << x[i] << " ";


}
