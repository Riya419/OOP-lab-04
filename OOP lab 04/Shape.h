#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include "Drawable.h"

// Inherits from Drawable
// This class defines basic properties for shapes
class Shape : public Drawable {
public:
    virtual double calculateArea() = 0;  // Function for area calculation
};

#endif