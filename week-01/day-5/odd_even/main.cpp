#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int numberInput;

    std::cout << "The number you add, I'll tell if it's even or odd: " << std::endl;
    std::cin >> numberInput;

    if(numberInput%2==0){
        std::cout << "This number is even." << std::endl;
    }else {
        std::cout << "This number is odd." << std::endl;
    }


    return 0;
}