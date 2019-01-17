#include <iostream>
#include <string>

void factorio(int, int&);

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int a;
    int result = 5;

    std::cout << "Please, enter a number ";
    std::cin >> a;
    factorio(a, result);
    std::cout << "The factorial of the entered number (" << a << ") is: " << result << std::endl;

    return 0;
}

void factorio(int x, int& retValue){

    retValue = 1;
    for(int i=1;i<=x;i++){
        retValue*=i;

    }

}