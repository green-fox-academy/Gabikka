#include <iostream>
#include <string>

int doubling(int);

int main(int argc, char* args[]) {

    int baseNum = 123;

    std::cout << doubling(baseNum) << std::endl;

    return 0;
}

int doubling(int nr) {
   return nr*2;


}