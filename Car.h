//
// Created by Antonio Vargas on 7/24/22.
//

#ifndef CARSIM_CAR_H
#define CARSIM_CAR_H


#include "Vehicle.h"

class Car : public Vehicle{
private:
    std::string Driver;
public:
    Car(std::string name, int current_speed, std::string driver) : Vehicle(name, current_speed) {
        Driver = driver;
    }
    void set_driver(std::string driver) {
        Driver = driver;
    }
    std::string get_driver() const {
        return Driver;
    }
    std::string get_name() const;
    int get_speed() const;
};


#endif //CARSIM_CAR_H
