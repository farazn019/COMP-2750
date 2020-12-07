#include <iostream>
#include <algorithm>

//This function contains the algorithm for the Thanos problem.
void Thanos(){
    short int T; //The variable T is declared here.
    std::cin >> T; //The user is asked to enter a value for T.
    long long P, R, F; //The variables P, R, and F, are declared here, and they are of type long long.
    long long years = 0; //This long long variable contains the value for years, with an inital value of 0.
    
    //This for-loop has T iterations, to determine how long each planet has.
    for(int i = 0; i < T; i++){
        //Necessary inputs made by the user.
        std::cin >> P >> R >> F;
        
        //As long as the annual food production is greater than the population, this while-loop will run.
        while(F >= P){
            //The value of P is multiplied with itself and R.
            P = P * R;
            years ++; //The value of years is incremented by 1.
        }
        std::cout << years << std::endl; //The number of years are printed out.
        years = 0; //The value of years is reset to 0.
    }
}




//This is the main function/
int main(){
    Thanos(); //The solution is called over here.
    return 0; //This is the main function.
}
