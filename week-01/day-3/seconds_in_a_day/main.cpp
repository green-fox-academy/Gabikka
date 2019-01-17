#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int remSec;
    remSec = (24*60*60)-(currentHours*3600+currentMinutes*60+currentSeconds);

    std::cout << remSec << std::endl;
    return 0;
}