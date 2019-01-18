#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // string
    std::string welcome = "Hello, World";
    std::cout << welcome << std::endl;

    // boolean
    bool isAwesome = true;
    std::cout << isAwesome << std::endl;

    // whole number
    // integer (32 bit; min: -2 147 483 648; max: 2 147 483 647)
    int theMeaningOfLifeAndTheUniverseAndEverything = 42;
    std::cout << theMeaningOfLifeAndTheUniverseAndEverything << std::endl;

    // floating point number
    // double (64 bit, double precision IEEE 754)
    double pi = 3.141592;
    std::cout << pi << std::endl;

    // other mentioned types
    short s = 567;  // Short (16 bit; min: -32768 ; max: +32 767)
    long l = 3000000000; // long (64 bit; min: -9 223 372 036 854 775 808 ;max: 9 223 372 036 854 775 807)
    //float f = 1.3f;

    // declaring a variable
    int number;

    // assigning a variable, (define its value)
    number = 12;

    // mutate a variable, (redefine its value)
    number = 23;

    int a = 12;
    a += 4;
    std::cout << a << std::endl;

    int b = 12;
    b -= 4;
    std::cout << b << std::endl;

    int c = 12;
    std::cout << c++ << std::endl;
    std::cout << c << std::endl;

    int d = 12;
    std::cout << "d: " << ++d << std::endl;
    std::cout << "d2: " << d << std::endl;

    int e = 12;
    std::cout << e-- << std::endl;
    std::cout << e << std::endl;

    int f = 12;
    std::cout << --f << std::endl;
    std::cout << f << std::endl;

    int g = 12;
    g *= 3;
    std::cout << g << std::endl;

    int h = 12;
    h /= 3;
    std::cout << h << std::endl;

    int i = 12;
    i %= 7;
    std::cout << i << std::endl;

    return 0;
}