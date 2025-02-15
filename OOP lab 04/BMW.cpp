#include "BMW.h"
#include <iostream>

// Override draw function, ASCII representation
void BMW::draw() {
    std::cout << "   ______    \n"
        << "  /|_||_\\`.__ \n"
        << " (   _    _ _\\ \n"
        << " =`-(_)--(_)-' \n";
}

// Override drive function
void BMW::drive() {
    std::cout << "Driving a BMW\n";
}