#include <iostream>
#include "Stuff/ready.h"


int main(int argc, char *argv[]){
    std::cout << "Hello\n" << std::endl;
    Ready a;
    a.Release();
    int x = 10;
    while(x!= 20){
        x++;
        std::cout << x << " ";
    }
        std::cout << std::endl;
    return 0;
}
