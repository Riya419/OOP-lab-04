#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Drawable.h"
#include "Vehicle.h"
#include "Shape.h"
#include <vector>

// Global draw function to draw any drawable object
void draw(Drawable* drawable);

// Global drive function to drive any vehicle
void drive(Vehicle* vehicle);

// Global function to calculate total area of shapes
double getTotalArea(std::vector<Shape*> shapes);

#endif