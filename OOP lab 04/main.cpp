// Lab 4 - Riya Chauhan


#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "BMW.h"
#include "Mazda.h"
#include "Functions.h"
#include <vector>

int main() {
    // Create shapes
    Circle circle1(5);
    Circle circle2(7);
    Rectangle rect1(4, 6);
    Rectangle rect2(3, 8);

    // Create vehicles
    BMW bmw;
    Mazda mazda;

    // Test draw functions for shapes
    std::cout << "Drawing Circle 1:\n";
    draw(&circle1);

    std::cout << "\nDrawing Circle 2:\n";
    draw(&circle2);

    std::cout << "\nDrawing Rectangle 1:\n";
    draw(&rect1);

    std::cout << "\nDrawing Rectangle 2:\n";
    draw(&rect2);

    // Test draw and drive functions for BMW
    std::cout << "\nDrawing BMW:\n";
    draw(&bmw);   // drawing BMW
    drive(&bmw);   // driving BMW

    // Test draw and drive functions for Mazda
    std::cout << "\nDrawing Mazda:\n";
    draw(&mazda);   // drawing mazda
    drive(&mazda);   // driving mazda

    // Test getTotalArea function
    std::vector<Shape*> shapes = { &rect1, &rect2, &circle1, &circle2 };
    double totalArea = getTotalArea(shapes);
    std::cout << "\nTotal Area of all shapes: " << totalArea << "\n";

    return 0;
}