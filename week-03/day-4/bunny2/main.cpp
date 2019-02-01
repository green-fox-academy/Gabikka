#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int countEars(int n)
{
    if (n == 0) return 0; // base case, no bunnies have no ears

    if (n % 2 == 0) { // check if number of bunnies is odd or even
        return 2 + countEars(n - 1);
    } else {
        return 3 + countEars(n - 1);
    }
}

int countBunnies(int n)
{

    if (n < 1) {
        return 0;
    } else {
       return countEars(n);
    }

}

int main() {

    int x;

    std::cout << "Type in a number" << std::endl;
    std::cin >> x;

    std::cout << countBunnies(x) << std::endl;

    return 0;
}