#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 13;

    if (a == 13) {
        std::cout << "Yaaaay! The value of the variable is 13." << std::endl;
    }

    if (a == 8) {
        std::cout << "Yaaaay! The value of the variable is 8." << std::endl;
    }

    int b = 20;

    if (b < 10) {
        std::cout << "Yaaaay! The value of the variable is lower than 10." << std::endl;
    } else {
        std::cout << "Yaaaay! The value of the variable is higher than 10." << std::endl;
    }

    int c = 15;

    if (c < 10) {
        std::cout << "Yaaaay! The value of the variable is lower than 10." << std::endl;
    } else if (c < 20) {
        std::cout << "Yaaaay! The value of the variable is lower than 20 but higher that 10." << std::endl;
    } else {
        std::cout << "Yaaaay! The value of the variable is higher than 20" << std::endl;
    }

    bool thirsty = true;
    bool hungry = false;

    if(thirsty && hungry) {
        std::cout << "Lunch time!" << std::endl;
    } else if (thirsty || hungry) {
        std::cout << "Snack time!" << std::endl;
    } else {
        std::cout << "Adventure time!" << std::endl;
    }

    return 0;
}