#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int a, b;

    std::cout << "Give me 2 numbers, I'll tell you which one is bigger" << std::endl;
    std::cin >> a;
    std::cin >> b;

    if (a>b){
        std::cout << "The bigger number is: " << a << std::endl;
    } else if (a==b) {
        std::cout << "Heeey, heey, these two numbers are the same" << std::endl;
    }
        else {
            std::cout << "The bigger number is: " << b << std::endl;
        }
    return 0;
}