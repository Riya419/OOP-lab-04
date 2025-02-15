#pragma once

#ifndef VEHICLE_H
#define VEHICLE_H

#include "Drawable.h"

// Vehicle class represents any vehicle that can be drawn and driven
class Vehicle : public Drawable {
public:
    virtual void drive() = 0;  // Virtual function for driving the vehicle
};

#endif