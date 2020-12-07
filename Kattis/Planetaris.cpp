#include <iostream>
#include <algorithm>

//This function implements the solution for the Planetaris problem.
void planetaris(){
    //This varaible holds the number of test cases.
    int testCases;
    std::cin >> testCases; //The user will enter the number of test cases.
    
    //An array which contains the number of ships Fenni will send to each solar system.
    int solarSystem[testCases];
    
    //This variable will hold the number of ships at Atli's disposal.
    int numShips;
    std::cin >> numShips; //The user is prompted to enter the number of ships at Atli's disposal.
    
    int victories = 0; //The inital value of victories is set to 0.
    
    //The user is prompted to enter the amount of ships Fenni will send to each galaxy.
    for(int i = 0; i < testCases; i++){
        std::cin >> solarSystem[i];
    }
    
    //The ships that Fenni will send to each galaxy is sorted in ascending order.
    std::sort(solarSystem, solarSystem + testCases);
    
    //This will compute how many victories Atli can achieve.
    for(int j = 0; j < testCases; j++){
        //The number of ships at Atli's disposal is subtracted by the number that Fenni has minus 1, because Atli needs more ships than Fenni to win.
        numShips = (numShips - solarSystem[j]) - 1;
        
        if(numShips < 0){ break;} //If Atli has no ships left, then the program will break.
        else{ victories++;} //If Atli has ships left, after the attack, then the amount of victories will be incremented by one.
    }
    std::cout << victories; //The number of victories is printed.

}

//This is the main function.
int main(){
    planetaris(); //The function is called here.
    return 0; //A value of 0 is returned by the main function signalling successful termination.
}
