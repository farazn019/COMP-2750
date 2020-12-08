
#include <iostream>
#include <cmath>

//This function has the solution for the Pot problem in Kattis.
void Pot(){
    //The cases integer is declared here. It will hold the number of cases.
    int cases;
    //The num integer is declared here. It will hold the number in each iteration.
    int num;
    //The user is prompted to enter how many numbers they will enter.
    std::cin >> cases;
    //The exponent integer is declared here.
    int exponent;
    //The total integer is declared here.
    int total = 0;
    //The user will input a number between 0 and 1 000 000 000 'cases' times.
    for(int i = 0; i < cases; i++){
        //The user is prompted to input a value of num.
        std::cin >> num;
        //The last digit of num is the exponent.
        exponent = num % 10;
        //The value of num is divided by 10.
        num /= 10;
        //The value of total is increased by num to the power of exponent.
        total += (int)pow(num, exponent);
    }
    //The value of total is printed.
    std::cout << total << std::endl;
}

//This is the main function.
int main(){
    Pot(); //The Pot function is called here.
    return 0; //A value of 0 is returned.
}
