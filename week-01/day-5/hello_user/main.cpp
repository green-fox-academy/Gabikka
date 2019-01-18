#include <iostream>

int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    std::string a;

    std::cout << "I would like to greet you. Please enter your name: " << std::endl;
    std::cin >> a;
    std::cout << "Hello " << a << "!" << std::endl;

    return 0;
}