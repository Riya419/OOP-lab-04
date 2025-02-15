#include <iostream>
#include "Circle.h"
#include <cmath>

#define M_PI 3.14159265358979323846

// constructor
Circle::Circle(double r) : radius(r) {}

// Override draw function to print an ASII representation of a circle
void Circle::draw() {
    std::cout << "    ***    \n"
        << "  *     *  \n"
        << " *       * \n"
        << "  *     *  \n"
        << "    ***    \n";
}

// Override calculateArea function
double Circle::calculateArea() {
    return M_PI * radius * radius; // Area of circle = πr²
}
