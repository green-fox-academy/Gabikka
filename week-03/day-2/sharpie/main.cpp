#include <iostream>

class Sharpie
{
public:
    Sharpie(const std::string &color, float width) : color(color), width(width) {
        inkAmount = 100.00;
    }

    void use() //inkAmount decreases based on the width
    {
        if(width <= 10) {
            inkAmount--;
        } else if (width <= 40){
            inkAmount -= 10;
        } else if (width <= 100){
            inkAmount -=100;
        }
    }

    std::string toString () {
        return "The created sharpie's color is: " + std::string(color) + " " + std::to_string(width) + " wide. Ink amount left: " + " " + std::to_string(inkAmount);

    }

private:
    std::string color;
    float width;
    float inkAmount;

};

int main() {

    std::string c;
    float w;

    std::cout << "Let's create a Sharpie! \n Please tell me the desired color: " << std::endl;
    std::cin >> c;

    std::cout << "Please tell me the desired width: " << std::endl;
    std::cin >> w;

    Sharpie sharpie01(c, w);
    sharpie01.use();
    std::cout << sharpie01.toString() << std::endl;
    return 0;
}

    /*
    Create Sharpie class
    We should know about each sharpie their color (which should be a string), width (which will be a floating point
    number), inkAmount (another floating point number)
    When creating one, we need to specify the color and the width
    Every sharpie is created with a default 100 as inkAmount
    We can use() the sharpie objects
    which decreases inkAmount
    */