#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 3;
    a +=10;
    std::cout <<a<< std::endl;

    int b = 100;
    b -=7;
    std::cout << b << std::endl;

    int c = 44;
    c*=2;
    std::cout << c << std::endl;

    int d = 125;
    d/=5;
    std::cout << d << std::endl;

    int e = 8;
    e *= e*e;
    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool f3;
    f3 = f1>f2;
    std::cout << "f1 is bigger than f2: " << f3 << std::endl;

    int g1 = 350;
    int g2 = 200;
    g2 += g2;
    bool g3;
    g3 = g2 > g1;
    std::cout << "the double of g2 is bigger than g1: " << g3 << std::endl;

    int h = 135798745;
    int h1 = h%11;
    bool h3 = h1==0;
    std::cout << "11 is a divisor of " << h << ":" << h3 << std::endl;

    int i1 = 10;
    int i2 = 3;
    int i2_sq = i2*=i2;
    int i2_cub = i2*= i2*i2;
    bool i3 = f1 > i2_sq;
    bool i4 = i1 < i2_cub;
    bool i5 = i3 || i4;
    std::cout << i5 << std::endl;

    int j = 1521;
    int j_3 = j%3;
    int j_5 = j%5;
    bool jd;
    jd = j_3 || j_5;
    std::cout << j << "is dividable by 3 or 5" << std::endl;

    std::string k = "Apple";
    k = k+k+k+k;

    std::cout << k << std::endl;

        return 0;
}