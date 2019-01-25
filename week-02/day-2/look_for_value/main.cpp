#include <iostream>

int myFunction(int array, int nrToFind, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == nrToFind) {
            return i;
        } else {
            return 0;
        }
    }
}

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int myArray[5] = {1, 2, 3, 4, 5};
    int a = 4;
    int b = sizeof(myArray)/sizeof(myArray[0]);

    myFunction(myArray, a, b);



    return 0;
}