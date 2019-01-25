#include <iostream>

int main()
{

    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int myArray[5];

    std::cout << "My five numbers are: " << std::endl;

    for (int i = 0; i < 5; i++){
        std::cin >> myArray[i];
    };

    int *p_myArray = myArray;

    for (int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++) {
        std::cout << *(p_myArray + i) << std::endl;
    }
    return 0;
}