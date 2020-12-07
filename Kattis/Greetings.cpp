#include <iostream>
#include <algorithm>

//This is the solution.
void greetings(){
    //Declares a variable string with name s.
    std::string s;
    //User is prompted to input a string.
    std::cin >> s;
    
    //Counts the number of e's in the string.
    int num_e = std::count(s.begin(), s.end(), 'e');
    
    //Prints the new string.
    std::cout << 'h';
    for(int i = 0; i < num_e * 2; i++){
        std::cout << 'e';
    }
    std::cout << 'y';

}

//This is the main function
int main(){
    greetings(); //The function is called here.
    return 0; //The function returns 0 signalling successful termination
}
