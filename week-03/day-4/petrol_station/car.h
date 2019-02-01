//
// Created by Nagy Gábor on 2019. 02. 01..
//

#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H


class car {

public:
    car(int gasAmount, int capacity);

    bool isFull();

    int fill(int _gasAmountCar);

private:
    int _gasAmountCar;
    int _capacity;

};


#endif //PETROL_STATION_CAR_H


/*
Car

Members:
gasAmount
capacity
create constructor for Car with 2 arguments(gasAmount and capacity)
car has 2 methods:
isFull() -> returns true if capacity equals to gasAmount, false otherwise
fill() -> increments the gasAmount by one.
In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.
 */