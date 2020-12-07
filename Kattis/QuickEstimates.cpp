#include <iostream>
#include <cstring>


void quickEstimates(){
    
    int N; //This will hold the number of costs
    std::cin >> N; //The user will prompted to enter the number of various costs.
    //The while loop will run N times.
    while(N --){
        int cost; //This variable will contain the cost for N various types of repairs.
        std::cin >> cost; //The user will be prompted to enter the cost.
        int digits = 0; //The inital value of digits is set to 0.
        //This will compute the number of digits in the number.
        while(cost >= 0){
            cost /= 10;
            digits += 1;
        }
        //The number of digits will be output.
        std::cout << digits << std::endl;
    }
    
}


//The main function is declared here.
int main(){
    quickEstimates(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
