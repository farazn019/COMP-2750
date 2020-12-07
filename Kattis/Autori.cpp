#include <iostream>
#include <cstring>
void Autori(){
    std::string input; //This will contain the value that the user enters.
    std::cin >> input; //The user enters a string value.
    
    int size = input.length(); //This variable stores the size of the string.
    
    std::string outputString; //This will contain the new string in all uppercase letters.
    
    //Iterates through the entire string.
    for(int i = 0; i < size; i++){
        //If the current character is upper case, then the outputstring will add that character.
        if(isupper(input.at(i))){
            outputString += std::string(1, input.at(i));
        }
    }
    //Prints the output string.
    std::cout << outputString;
}


//The main function is declared here.
int main(){
    Autori(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
