#include <iostream>


//This function computes the factorial of a number.
int computeFactorial(int number){
    //If the input is greater than or equal to 2, then the factorial is computed.
    if(number >= 2){
        return number % 10 * computeFactorial(number - 1) % 10;
    }
    //If not, then 1 is returned.
    else{
        return 1;
    }
}




void lastFactorialDaigit(){
    
    int T; //This variable holds the number of test cases.
    //The number of test cases is entered by the user.
    std::cin >> T;
    
    //This for-loop iterates through all the numbers entered by the user, and computes their factorial, then prints out the last digit.
    int answer;
    while(T--){
        //The num variable will hold the the factorial to be computed.
        int num;
        std::cin >> num; //The user is prompted to enter the factorial of the number they want.
        //if the number is greater than 5, then the last digit will be 0. 
        if(num >= 5){
            int answer = 0;
            std::cout << answer << std::endl;
        }
        //If the number is less than 5, then the last digit will be computed by multipling n*fact(n-1) and taking that answer modulo 10.
        else{
            int answer = computeFactorial(num);
            std::cout << answer << std::endl; //The answer is printed.
        }
    }
    

}

//This is the main function
int main(){
    lastFactorialDaigit(); //The function is called here.
    return 0; //The main function returns zero signalling successful termination
}
