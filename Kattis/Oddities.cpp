#include <iostream>
#include <cstdlib>

void Oddities(){
    
    
    //This integer will hold the number of test cases.
    int testCases;
    std::cin >> testCases; //The user will be prompted to enter test cases.
    
    //The for-loop will loop the number of times that the user entered test cases,
    for(int i = 0; i < testCases; i++){
        int currentNum; //This variable will hold the integer that the user will enter.
        std::cin >> currentNum; //The user enters an integer.
        //If currentNum is divisible by 2, then it will print that the number is even.
        if(currentNum % 2 == 0){
            std::cout << currentNum << " is even" << std::endl;
        }
        //If currentNum is not divisible by 2, then it will print that the number is odd.
        else{
            std::cout << currentNum << " is odd" << std::endl;
        }
    }
}


//This is the main function.
int main(){
    Oddities(); //The function is called here.
    return 0; //A value of 0 is returned, signalling successful termination.
}
