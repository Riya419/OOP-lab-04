#include "Functions.h"
#include <iostream>

// Global draw function
void draw(Drawable* drawable) {
    drawable->draw();     // calls the right draw() fucntion based on the object's type
}

// Global drive function
void drive(Vehicle* vehicle) {
    vehicle->drive();     // calls the right drive() function based on the vehicle's type
}

// Global function to calculate total area of shapes
double getTotalArea(std::vector<Shape*> shapes) {
    double totalArea = 0;
    for (Shape* shape : shapes) {
        totalArea += shape->calculateArea();  // Accumulates area from each shape
    }
    return totalArea;
}