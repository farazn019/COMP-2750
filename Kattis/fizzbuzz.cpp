#include <iostream>
#include <algorithm>

//This is the solution.
void fizzbuzz(){
    //Declares X, Y, and N
    int X, Y, N;
    //User enters X, Y, and N.
    std::cin >> X >> Y >> N;
    
    //Iterates from 1 all the way too N.
    for(int i = 1; i <= N; i++){
        //If the current number is divisible by X and Y, then FizzBuzz is printed.
        if(i % X == 0 && i % Y == 0){
            std::cout << "FizzBuzz" << std::endl;
        }
        
        //If the current number is divisible by x then Fizz is printed.
        else if(i % X == 0){
            std::cout << "Fizz" << std::endl;
        }
        //If current number is divisible by y then Buzz is printed.
        else if(i % Y == 0){
            std::cout << "Buzz" << std::endl;
        }
        //Else the number is printed.
        else{
            std::cout << i << std::endl;
        }
    }

}

//This is the main function
int main(){
    fizzbuzz(); //The function is called here.
    return 0; //The function returns 0 signalling successful termination
}
