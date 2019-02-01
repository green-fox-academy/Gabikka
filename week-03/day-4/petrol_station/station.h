//
// Created by Nagy Gábor on 2019. 02. 01..
//

#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H


class station {

public:

    station(int gasAmount);

private:
    _gasAmountStation = gasAmount;




};


#endif //PETROL_STATION_STATION_H

/*
Petrol Station
Create Station and Car classes

Station

Members:
gasAmount
create a constructor that initializes the gasAmount
fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console.
 When the car is full it should print the remaining gas amount of the station
*/