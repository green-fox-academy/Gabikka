#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int numberOne;
    std::cout << "Number one: " << std::endl;
    std::cin >> numberOne;

    int numberTwo;
    std::cout << "Number two: " << std::endl;
    std::cin >> numberTwo;

    if (numberTwo < numberOne){
        std::cout << "The second should be bigger" << std::endl;
    } else {
        for (int i = numberOne; i <= numberTwo; i++) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}