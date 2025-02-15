#pragma once
#ifndef DRAWABLE_H
#define DRAWABLE_H

// Class ensures any derived class implements the darw function
// Used for all drawable objects
class Drawable {
public:
    virtual void draw() = 0;  // Implements a draw function
};

#endif