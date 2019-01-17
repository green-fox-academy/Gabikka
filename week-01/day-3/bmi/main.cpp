#include <iostream>

int main(int argc, char* args[]) {
    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi = massInKg / (heightInM*heightInM);
    std::cout << "This person's BMI index is: " << bmi << std::endl;

        return 0;
}