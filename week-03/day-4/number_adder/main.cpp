#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int addNumber(int n)
{
    if (n < 1) {
        return 0;
    } else {
        return n + addNumber(n-1);

    }
}


int main() {

    int x;

    std::cout << "Type in a number" << std::endl;
    std::cin >> x;

    std::cout << addNumber(x) << std::endl;

    return 0;
}