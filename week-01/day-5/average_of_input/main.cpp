#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    double a, b, c, d, e;

    std::cout << "Type five numbers in a row: " << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;

    double sum = a+b+c+d+e;
    double average = sum/5;

    std::cout << sum << std::endl;
    std::cout << average << std::endl;

    return 0;
}