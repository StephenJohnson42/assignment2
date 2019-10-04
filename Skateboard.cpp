

//
// Created by Stephen Johnson 10/3/2019
//

#include "Skateboard.h"

Skateboard::~Skateboard() = default;

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}