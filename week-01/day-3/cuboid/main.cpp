#include <iostream>

int main(int argc, char* args[]) {

    double a = 18.;
    double b = 22.;
    double c = 5.;
    double d;
    d = a*b*6;
    double e;
    e = a*b*c;
    std::cout << "The surface of my cuboid is: " << d << " m2" << std::endl;
    std::cout << "The volume of my cuboid is: " << e << " m3" << std::endl;

    return 0;
}