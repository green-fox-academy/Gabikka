//
// Created by Nagy Gábor on 2019. 02. 01..
//

#include "car.h"
#include "station.h"

car::car(int gasAmount, int capacity){

   _gasAmountCar = gasAmount;
   _capacity = capacity;

}

car::isFull()
{
   return _capacity == _gasAmountCar;

}

car::fill(_gasAmount)
{
   if (_gasamountCar < _capacity) {
      for (i = 0; i < (_gasAmountCar-_capacity); i++) {
      _gasAmountCar++;
      } else if(isfull()) {
         std::cout << "Remaining gas amount of station: " << _gasAmountStation - _capacity;
   }
}

};






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