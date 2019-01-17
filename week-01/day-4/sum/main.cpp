#include <iostream>
#include <string>

int sum(int);

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer
    int a;
    std::cout << "Please, enter a number";
    std::cin >> a;
    std::cout << "The sum of the entered number (" << a << ") is: " << sum(a) << std::endl;

    return 0;
}

int sum(int x){
    int y = 0;
    for(int i=0;i<=x;i++){
        y += i;
    }
    return y;
}
