#include <iostream>
#include "Person.h"


int main() {

    Person p("Gabikka", 40, Gender::MALE);
    p.introduce();
    p.getGoal();



    return 0;
}