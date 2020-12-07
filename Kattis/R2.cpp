#include <iostream>

//This function is the solution for the R2 problem.
void RTwo(){
    int ROne; //The first number is declared here.
    int S; //The mean is declared here.
    
    std::cin >> ROne; //The user is asked to input for ROne.
    std::cin >> S; //The user is asked to input for the Mean.
    
    //The second number to find the mean (S) is computed.
    int RTwo = (2*S) - ROne;
    //RTwo is printed.
    std::cout << RTwo;
}

//This is the main function.
int main(){
    RTwo(); //The RTwo function is called here.
    return 0; //A value of 0 is returned, indicating the sucessful termination of the program.
}
