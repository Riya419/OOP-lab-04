#pragma once
#ifndef MAZDA_H
#define MAZDA_H

#include "Vehicle.h"

// Represents a Mazda car
class Mazda : public Vehicle {
public:
    // Override draw function
    void draw() override;

    // Override drive function
    void drive() override;
};

#endif