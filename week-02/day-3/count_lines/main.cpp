#include <iostream>
#include <fstream>
#include <string>


int countLines(std::string);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    countLines("my-text.txt");

return 0;
}

int countLines(std::string lines) {
    std::ifstream myFile(lines);

    std::string linesRead;
    int numberOfLines = 0;

    while (getline(myFile,linesRead)) {
        numberOfLines += 1;
    }
    std::cout << numberOfLines << std::endl;

}