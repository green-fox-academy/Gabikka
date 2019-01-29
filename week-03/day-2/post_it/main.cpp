#include <iostream>

class PostIt
{
    std::string bgColor;
    std::string text;
    std::string textColor;

public:
    PostIt(std::string bgColor_, std::string text_, std::string textColor_)
    {
        bgColor = bgColor_;
        text = text_;
        textColor = textColor_;
    }

    std::string toString () {
        return "Post it: " + bgColor + ", " + text + ", " + textColor;
    };
};

int main() {

    PostIt postit1("0xff6600", "Idea 1", "0x6600ff");
    std::cout << postit1.toString() << std::endl;

    PostIt postit2("0xff0066", "Awesome'", "0xfff");
    std::cout << postit2.toString() << std::endl;

    PostIt postit3("0xffff00", "Superb!", "0x00ff00");
    std::cout << postit3.toString() << std::endl;


    return 0;
}