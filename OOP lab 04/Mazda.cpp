#include "Mazda.h"
#include <iostream>

// Override draw function, ASCII representation
void Mazda::draw() {
    std::cout << "   _______    \n"
        << "  /|_||_||_\\`.\n"
        << " (   _    _  )\n"
        << " =`-(_)--(_)-' \n";
}

// Override drive function
void Mazda::drive() {
    std::cout << "Driving a Mazda\n";
}