#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int x;

    std::cout << "Tell your favorite number of all, I will show it in a diagonal";
    std::cin >> x;

    int arrayMatrix[x][x];


    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if(i == j){
                arrayMatrix[i][j] = 1; //if the indexes of a given element are identical, the value is 1
            } else {
                arrayMatrix[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            std::cout << arrayMatrix[i][j]; //print the elements of the matrix
            std::cout << " "; //print a space character to the end of the element
        }
        std::cout << std::endl; //after element and space put a new line and continue with the loop
    }


    return 0;
}