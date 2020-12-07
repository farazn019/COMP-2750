#include <iostream>

//This function is the solution for the Stuck In A Time Loop Problem.
void stuckInATimeLoop(){
    //An integer is created which will be taken as input.    
    int integer;
    
    //The user is prompted to enter input for an integer.
    std::cin >> integer;
    
    //This for-loop prints the current number and the Abracadabra.
    for(int i = 0; i < integer; i++){
        std::cout << i+1 << " Abracadabra" << std::endl;
    }
}

//This is the main function.
int main(){
    //The stuckInATimeLoop function is called here.
    stuckInATimeLoop(); //The function returns a value of 0.
    return 0;
}
