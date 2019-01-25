#include <iostream>
#include <fstream>
#include <string>
int myFunction (std::string, std::string, int);

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {
    std::string userPath;
    std::string userLines;
    int userNumber;

    std::cout << "Let's create a file!\n Please write a name for the file:" << std::endl;
    std:: cin >> userPath;
    std::cout << "Great!\n Now write something we should put in it:" << std::endl;
    std::cin >> userLines;
    std::cout << "Awesome!˛\n Please give a number how many time we should add your world to the file" << std::endl;
    std::cin >> userNumber;

    /*std::string myPath ("write_multiple_lines.txt");
    std::string myLines ("Nem adom fel!");
    int a = 3;

    myFunction (myPath, myLines, a);*/

    myFunction (userPath, userLines, userNumber);

    std::cout << "Awesome, uh?";
    return 0;
}

int myFunction (std::string path, std::string lines, int numberOfLines){

    std::ofstream myFile;
    myFile.open(path);

    for(int i = 0; i < 3; i++) {
        myFile << lines << "\n";
    }

}