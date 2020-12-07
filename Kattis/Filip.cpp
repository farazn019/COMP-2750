#include <iostream>
#include<bits/stdc++.h> 

//This is the solution.
void Filip(){
    //Two strings A and B are declared which will contain both the numbers.
    std::string A;
    std::string B;
    
    //The user will enter the values for A and B.
    std::cin >> A;
    std::cin >> B;
    
    //The program will reverse A and B.
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    
    //The program will convert A and B to integers.
    int int_A = std::stoi(A);
    int int_B = std::stoi(B);
    
    //If A is greater than B, then A will be printed.
    if(int_A > int_B){
        std::cout << int_A;
    }
    //If A is less than B, then B will be printed.
    else if(int_A < int_B){
        std::cout << int_B;
    }

}

//This is the main function
int main(){
    Filip(); //The function is called here.
    return 0; //The function returns 0 signalling successful termination
}
