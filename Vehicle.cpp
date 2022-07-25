//
// Created by Antonio Vargas on 7/24/22.
//

#include "Vehicle.h"
#include <iostream>

std::string Vehicle::get_name() const {
    return Name;
}

int Vehicle::get_speed() const {
    return CurrentSpeed;
}

