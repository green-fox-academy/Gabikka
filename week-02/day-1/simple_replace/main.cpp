
#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string example("In a dishwasher far far away");
    //example.replace("dishwasher", "galaxy"); -- this line of code does not work in C++.

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    std::string wordToReplace = "dishwasher";

    int start_pos = example.find(wordToReplace);
    if(start_pos == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        example.replace(start_pos, wordToReplace.length(), "galaxy");

    std::cout << example << std::endl;
    return 0;
}