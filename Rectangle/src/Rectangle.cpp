#include "Rectangle.h"

Rectangle::Rectangle() {
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->height = 0;
}

Rectangle::Rectangle(double x, double y, double width, double height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

Rectangle::Rectangle(Rectangle const &rectangle) {
    this->x = rectangle.x;
    this->y = rectangle.y;
    this->width = rectangle.width;
    this->height = rectangle.height;
}

Rectangle Rectangle::operator = (Rectangle const &rectangle) {
    return Rectangle(rectangle);
}

double Rectangle::operator [] (unsigned index) {
    int l[] = {this->x, this->y, this->width, this->height};
    return l[index];
}

Rectangle Rectangle::operator + (Rectangle const &rectangle) {
    double x = std::min(this->x, rectangle.x);
    double y = std::min(this->y, rectangle.y);
    double w = std::max(this->x + this->width, rectangle.x + rectangle.width) - x;
    double h = std::max(this->y + this->height, rectangle.y + rectangle.height) - y;
    return Rectangle(x, y, w, h);
}

Rectangle Rectangle::operator * (Rectangle const &rectangle) {
    double x = std::max(this->x, rectangle.x);
    double y = std::max(this->y, rectangle.y);
    double w = std::min(this->x + this->width, rectangle.x + rectangle.width) - x;
    double h = std::min(this->y + this->height, rectangle.y + rectangle.height) - y;
    return Rectangle(x, y, w, h);
}

void Rectangle::disp() {
    std::cout << "Rectangle x: " << this->x << ", y: " << this->y
              << ", width: " << this->width << ", heigth: " << this->height;
}

double Rectangle::perimeter() {
    return 2 * this->width + 2 * this->height;
}

double Rectangle::area() {
    return this->width * this->height;
}

bool Rectangle::contains(Rectangle const &rectangle) {
    return this->x <= rectangle.x &&
           this->y <= rectangle.y &&
           this->x + this->width >= rectangle.x + rectangle.width &&
           this->y + this->height >= rectangle.y + rectangle.height;
}
