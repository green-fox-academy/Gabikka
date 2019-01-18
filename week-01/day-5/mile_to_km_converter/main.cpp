#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    double km;

    std::cout << "Distance in kilometers: " << std::endl;
    std::cin >> km;

    double miles;
    miles = km*0.62137;

    std::cout << "Distance converted to miles: " << miles << std::endl;

    return 0;
}