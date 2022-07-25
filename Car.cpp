//
// Created by Antonio Vargas on 7/24/22.
//

#include "Car.h"


std::string Car::get_name() const {
    return "The car named " + Name + " is being driven by " + Driver + " and is driving at ";
}

int Car::get_speed() const {
    return CurrentSpeed;
}