#include <iostream>
#include <cstdlib>

void NumberFun(){
    
    
    //This integer will hold the number of test cases.
    int testCases;
    std::cin >> testCases; //The user will be prompted to enter test cases.
    
    //The for-loop will loop the number of times that the user entered test cases,
    for(int i = 0; i < testCases; i++){
        double a, b, c;
        std::cin >> a >> b; //The user will be promtped to enter two number two give the reuslt, which is c.
        std::cin >> c; //The user will be prompted to enter the result.
        
        //If a and b can add, subtract, divide, or multiply to give c, then Possible will be printed.
        if((a * b == c) || (a + b == c) || (a / b == c) || (b / a == c) || (a - b == c) || (b - a == c)){
            std::cout << "Possible" << std::endl;
        }
        //If a and b can not add, subtract, divide, or multiply to give c, then Impossible will be printed.
        else{
            std::cout << "Impossible" << std::endl;
        }
    }
}


//This is the main function.
int main(){
    NumberFun(); //The function is called here.
    return 0; //A value of 0 is returned, signalling successful termination.
}
