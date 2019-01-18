#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chickenNr;
    int pigNr;

    std::cout << "Number of chickens: " << std::endl;
    std::cin >> chickenNr;

    std::cout << "Number of pigs: " << std::endl;
    std::cin >> pigNr;

    chickenNr*=2;
    pigNr*=4;
    int legs = chickenNr+pigNr;

    std::cout << "Number of legs: " << legs << std::endl;


    return 0;
}