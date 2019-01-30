//
// Created by Nagy Gábor on 2019. 01. 30..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {

public:
    Counter(int input);

    Counter();

    void add(int input);
    void add();
    int get();
    void reset();

private:
    int defaultValue;
    //int numberAdded;
    int currentValue;

};


#endif //COUNTER_COUNTER_H
