#include <iostream>
#include <cstring>
void TakeTwoStones(){
    
    //This variable holds the number of stones.
    int N;
    std::cin >> N; //The user is prompted to enter the number of stones.
    
    //If the number of stones is 1, then Alice wins.
    if(N == 1){
        std::cout << "Alice";
    }
    //If the number of stones is 2, then Bob wins.
    else if(N == 2){
        std::cout << "Bob";
    }
    else{
        //If there is an even number of stones then Bob wins.
        if(N % 2 == 0){
            std::cout << "Bob";
        }
        //If there is an odd number of stones then Alice wins.
        else{
            std::cout << "Alice";
        }
    }
}


//The main function is declared here.
int main(){
    TakeTwoStones(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
