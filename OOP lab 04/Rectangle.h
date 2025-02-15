#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

// Implements specific behaviour for rectangles
class Rectangle : public Shape {
private:
    double width, height;

public:
    // constructor to initialize the rectangle with specific width and height
    Rectangle(double w, double h);

    // Override draw function
    void draw() override;

    // Override calculateArea function
    double calculateArea() override;
};

#endif