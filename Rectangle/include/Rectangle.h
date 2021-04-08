#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <algorithm>
#include <iostream>

class Rectangle {
    public:
        Rectangle();
        Rectangle(double x, double y, double width, double height);
        Rectangle(Rectangle const &rectangle);
        Rectangle operator = (Rectangle const &rectangle);
        double operator [] (unsigned index);
        Rectangle operator + (Rectangle const &rectangle);
        Rectangle operator * (Rectangle const &rectangle);
        void disp();
        double perimeter();
        double area();
        bool contains(Rectangle const &rectangle);

    private:
        double x;
        double y;
        double width;
        double height;
};

#endif // RECTANGLE_H
