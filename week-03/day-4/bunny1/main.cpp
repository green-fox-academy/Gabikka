#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int countEars(int n)
{
    if (n < 1) {
        return 0;
    } else {
        return 2 + countEars(n - 1);

    }
}


int main() {

    int x;

    std::cout << "Type in a number" << std::endl;
    std::cin >> x;

    std::cout << countEars(x) << std::endl;

    return 0;
}