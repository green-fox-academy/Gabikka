#include <iostream>
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    int a = 1;
    std::string iwcote="I won't cheat on the exam!";

    while (a<101) {
        std::cout << a << ". " << iwcote << std::endl;
        a+=1;
    }

    return 0;
}