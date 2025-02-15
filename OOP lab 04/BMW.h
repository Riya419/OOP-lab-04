#pragma once

#ifndef BMW_H
#define BMW_H

#include "Vehicle.h"

// Represents a BMW car
class BMW : public Vehicle {
public:
    // Override draw function
    void draw() override;

    // Override drive function
    void drive() override;
};

#endif