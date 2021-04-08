#include "Rectangle.h"

#include <iostream>
#include <stdlib.h>

double doubleRand(double from, double to) {
    double rdm = (double)rand() / RAND_MAX;
    return rdm * (to - from) + from;
}

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << "Test #" << i << std::endl;
        Rectangle rect1 = Rectangle(doubleRand(-1, 1), doubleRand(-1, 1), doubleRand(1, 2), doubleRand(1, 2));
        Rectangle rect2 = Rectangle(doubleRand(-1, 1), doubleRand(-1, 1), doubleRand(1, 2), doubleRand(1, 2));
        Rectangle rect3 = rect1 + rect2;
        Rectangle rect4 = rect1 * rect2;

        std::cout << "Rect1: ";
        rect1.disp();
        std::cout << std::endl;

        std::cout << "Rect2: ";
        rect2.disp();
        std::cout << std::endl;

        std::cout << "Union: ";
        rect3.disp();
        std::cout << std::endl;

        std::cout << "Inter: ";
        rect4.disp();
        std::cout << std::endl << std::endl << std::endl;
    }
}
