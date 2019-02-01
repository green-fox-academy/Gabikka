#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.
int counter(int n)
{

    if (n <= 0) {
        return 1;
    } else {
      std::cout << n << std::endl;
      counter(n - 1);

    }

}

int main() {

    int x;

    std::cout << "Type in a number, I'll count down from it" << std::endl;
    std::cin >> x;

    counter(x);

    return 0;
}