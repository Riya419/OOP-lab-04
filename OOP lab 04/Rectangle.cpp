#include "Rectangle.h"
#include <iostream>

// constructor
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

// Override draw function to print an ASII representation of a rectangle 
void Rectangle::draw() {
    std::cout << "**************\n"
        << "*            *\n"
        << "*            *\n"
        << "**************\n";
}

// Override calculateArea function
double Rectangle::calculateArea() {
    return width * height; // Area of rectangle = width * height
}