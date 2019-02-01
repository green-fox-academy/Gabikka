#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int powerN(int base, int n)
{
    if(base <= 0 || n <= 0){
        return 1;
    } else {
        return base * powerN(base, n-1);
    }
}

int main() {

    int x;
    int y;
    std::cout << "Base";
    std::cin >> x;
    std::cout << "Power";
    std::cin >> y;

    std::cout << powerN(x, y) << std::endl;

    return 0;
}