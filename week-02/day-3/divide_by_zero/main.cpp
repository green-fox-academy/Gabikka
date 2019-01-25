#include <iostream>
#include <fstream>
int divider(int);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

       try {
           int num = 0;
           int b = divider(num);
       if (num == 0) {
            throw std::string("fail");
        }
        std::cout << b << std::endl;
    } catch (std::string& e) {
        std::cout << e << std::endl;
    }

    return 0;
}

int divider(int x) {
    int a = 10/x;

    return a;

}