#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>

// Implements specific behaviour for circles
class Circle : public Shape {
private:
    double radius;

public:
    // constructor to initialize the circle with a given radius
    Circle(double r);

    // Override draw function and prints simple representation of a circle
    void draw() override;

    // Override calculateArea function to return the area of the circle
    double calculateArea() override;
};

#endif