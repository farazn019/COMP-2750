#include <iostream>

void coldputer_science(){
    int N; //This function contains the number of days that temperature has been collected for.
    std::cin >> N; //The user is prompted to enter a value for N.
    
    int temp; //This variable will contain the temperature.
    int total_days = 0; //The number of days below zero is initally set to 0.
    for(int i = 0; i < N; i++){
        std::cin >> temp; //User is prompted to enter the temperature.
        //If the temperature is below 0, then the value of total_days is incremented by 1.
        if(temp < 0){++total_days;}
    }
    //The value of total_days is output.
    std::cout << total_days;
}


//The main function is declared here.
int main(){
    coldputer_science(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
