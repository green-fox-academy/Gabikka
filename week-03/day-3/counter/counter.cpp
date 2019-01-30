//
// Created by Nagy Gábor on 2019. 01. 30..
//

#include "counter.h"

Counter::Counter() {
    defaultValue = 0;
    currentValue = 0;
}

Counter::Counter(int input) {

    defaultValue = input;
    currentValue = input;
}

void Counter::add(int input){

    currentValue += input;

};

void Counter::add(){

    currentValue++;

};

int Counter::get(){

    return currentValue;
};

void Counter::reset(){

    currentValue = defaultValue;
};