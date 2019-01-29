#include <iostream>

class BlogPost
{
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;

public:
    BlogPost(std::string authorName_, std::string title_, std::string text_, std::string publicationDate_)
    {
        authorName = authorName_;
        title = title_;
        text = text_;
        publicationDate = publicationDate_;
    }

    std::string toString () {
        return title + ", by " + authorName + ", posted at: " + publicationDate + "\n" + text + "\n";
    };
};

int main() {

    BlogPost blogpost1("John Doe", "Lorem Ipsum", "Lorem Ispum dolor sit amet.", "2000.05.04");
    std::cout << blogpost1.toString() << std::endl;

    BlogPost blogpost2("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2017.03.28");
    std::cout << blogpost2.toString() << std::endl;

    BlogPost blogpost3("William Turnton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28");
    std::cout << blogpost3.toString() << std::endl;


    return 0;
}