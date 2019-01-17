#include <iostream>

int main(int argc, char* args[]) {
    int a = 123;
    int b = 526;
    int x = a;
    int y = b;
    a = y;
    b = x;


    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}