//
// Created by Antonio Vargas on 7/24/22.
//

#ifndef CARSIM_VEHICLE_H
#define CARSIM_VEHICLE_H
#include <iostream>

class Vehicle {
protected:
    std::string Name;
    int CurrentSpeed;
public:
    Vehicle(std::string name, int current_speed){
        Name = name;
        CurrentSpeed = current_speed;
    }
    virtual std::string get_name() const;
    virtual int get_speed() const;
    //int show_current_speed();
};


#endif //CARSIM_VEHICLE_H
