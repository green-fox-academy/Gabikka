#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`

    std::string twoDimensional[][];
    std::string green[] = {"lime", "forest green", "olive", "pale green", "spring green"};
    std::string red[] = {"orange red", "red", "tomato"};
    std::string pink[] = {"orchid", "violet", "pink", "hot pink"};

    for(int i = 0; i < sizeof(green); i++){
        int j = 0;
        twoDimensional[j][i] = green[i];
    }

    for(int i = 0; i < sizeof(red); i++){
        int j = 1;
        twoDimensional[j][i] = red[i];
    }

    for(int i = 0; i < sizeof(pink); i++){
        int j = 2;
        twoDimensional[j][i] = pink[i];
    }

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            std::cout << twoDimensional[i][j];
        }
        std::cout << std::endl;
    }


    return 0;
}