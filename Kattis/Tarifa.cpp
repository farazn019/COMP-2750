#include <iostream>
#include <cstring>
void Tarifa(){
    int dataLimit; //This variable holds the data limit per month.
    
    std::cin >>dataLimit; //User is prompted to enter data limit in each month..

    int months; //This variable holds the number of months the program will run for.
    std::cin >> months; //The user is prompted to enter the number of months.
    
    int n_plus_one_months = 0; //The amount of data that can be used after n + 1 months.
    while(months --){
        int data; //This will store the data that the user enter each month.
        std::cin >> data; //User is prompted to enter how much data they have used.
        //If the user has indeed used less data than the limit, then it will transfer over.
        n_plus_one_months += (dataLimit - data);
    }
    n_plus_one_months += dataLimit;
    std::cout << n_plus_one_months; //The data transferring over into n+1 months is printed.
}


//The main function is declared here.
int main(){
    Tarifa(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
