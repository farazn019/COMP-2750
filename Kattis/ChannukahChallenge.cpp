#include <iostream>

void channukah(){
    int numTestCases; //This will hold the number of test cases
    std::cin >> numTestCases; //The user is prompted to enter the number of test cases.
    
    while(numTestCases --){
        //Data set and number of days variables are declared here.
        int K, N;
        //The user inputs the data set and number of days respectively.
        std::cin >> K >> N;
        std::cout << K << " " << (N*(N + 1) / 2) + N << std::endl;
    }
}


//The main function is declared here.
int main(){
    channukah(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
