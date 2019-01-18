#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print if `p2` has more elements than `p1`

    int p1[] = {1,2,3};
    int p2[] = {4,5,};
    int sp1 = sizeof(p1)/sizeof(p1[0]);
    int sp2 = sizeof(p2)/sizeof(p2[0]);

    std::cout << "number of elements in p1: " << sp1 << std::endl;
    std::cout << "number of elements in p2: " << sp2 << std::endl;

    if(sp2>sp1){
        std::cout << "p2 has more elements than p1" << std::endl;
    }

        else {
            std::cout << "p2 does not have more elements than p1" << std::endl;
        }



    return 0;
}