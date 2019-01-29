#include <iostream>

class Animals
{
public:
    Animals()
    {
        hunger = 50;
        thirst = 50;
    }

    void eat()
    {
        hunger--;
    }

    void drink()
    {
        thirst--;
    }

    void play()
    {
        eat();
        drink();
    }

    std::string toString () {
        return std::to_string(hunger) + " " + std::to_string(thirst);
    };
private:
    int hunger;
    int thirst;

};

int main() {

Animals animal1 = Animals();
animal1.drink();
std::cout << animal1.toString() << std::endl;

Animals animal2 = Animals();
animal2.play();
std::cout << animal2.toString() << std::endl;



    return 0;
}