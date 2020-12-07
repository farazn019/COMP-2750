#include <iostream>
#include <cstring>
void Autori(){
    int testCases; //This variable holds the number of test cases.
    
    std::cin >>testCases; //User is prompted to enter number of test cases.
    int sizeArray = testCases; //The size of the array is the number of test cases.
    int numbers[testCases]; //The numbers array has a size of test cases.
    
    //The user will enter all the values in the numbers array.
    while(testCases--){
        std::cin >> numbers[testCases];
    }
    
    //This for-loop will iterate through the array and print all the contents in reverse.
    for(int i = 0; i < sizeArray; i++){
        std::cout << numbers[i] << std::endl;
    }
}


//The main function is declared here.
int main(){
    Autori(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
