#include <iostream>
#include "Vehicle.h"
#include "Car.h"

void show_info(const Vehicle& vehicle) { //
    std::cout << vehicle.get_name() << vehicle.get_speed() << "MPH.";
}

int main() {
    Vehicle vehicle("Civic", 35);
    Car car("Pilot", 40, "Tony");

    show_info(car);
    return 0;
}
