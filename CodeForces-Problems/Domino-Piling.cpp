#include <iostream>
#include <math.h>

void pileDominoes();

int main(){
    pileDominoes();
    return 0;
}



void pileDominoes(){
    int m, n;

    std::cin >> m;
    std::cin >> n;

    int areaOfBoard = m * n;
    int areaOfDominoes = 2;

    int numberOfDominoes = (areaOfBoard / 2);
    if(numberOfDominoes % 2 != 0){
        numberOfDominoes = floor(numberOfDominoes);
    }

    std::cout << numberOfDominoes;
}