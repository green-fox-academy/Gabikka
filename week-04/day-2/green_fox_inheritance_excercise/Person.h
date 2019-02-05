//
// Created by Nagy Gábor on 2019. 02. 05..
//
#include <iostream>
#ifndef GREEN_FOX_INHERITANCE_EXCERCISE_PERSON_H
#define GREEN_FOX_INHERITANCE_EXCERCISE_PERSON_H

enum Gender {
    MALE,
    FEMALE
};

class Person {

public:

    Person(std::string name, int age, Gender gender);
    Person();

    void introduce();
    void getGoal();

protected:

    std::string _name;
    int _age;
    Gender _gender;


};


#endif //GREEN_FOX_INHERITANCE_EXCERCISE_PERSON_H