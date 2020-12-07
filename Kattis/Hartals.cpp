#include <iostream>
#include <vector>

class Hartals{
private:
    //This variable contains the number of days over which the simulation will run.
    int daysRunOver;
    //This variable contains the number of political parties that will be represented.
    int numParties = 0;
    //This variable contains the hartal parameter of each political party.

    int hartalScore = 0;

public:

Hartals(){
    std::cin >> daysRunOver;
    std::cin >> numParties;
    int hartalParam[numParties];
    for(int j = 0; j < numParties; j++){
        std::cin >> hartalParam[j];

    }

    for(int i = 1; i <= daysRunOver; i++){
        for(int k = 0; k < numParties; k++){
            if(!((i % 7 == 0) || ((i - 1) % 6 == 0)) && (i % hartalParam[k] == 0)){
                hartalScore += 1;
            }
        }
    }

    std::cout << std::endl << hartalScore << std::endl;
}};


int main(){
    Hartals *hartal = new Hartals();
    return 0;
}