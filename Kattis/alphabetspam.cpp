#include <iostream>
#include <string.h>
#include <algorithm>
#include <iomanip>
#include <limits>

void alphabetspam(){
    //The string is declared here.
    std::string alphabets;
    
    //The user is prompted to input a string.
    std::cin >> alphabets;
    
    //The size of the string is computed.
    double size = alphabets.length() - 1;
    
    //The inital values of uppercase, lowercase, and symbols is set to zero.
    double upperCaseSymbols = 0;
    double lowerCaseSymbols = 0;
    double symbols = 0;
    
    //The number of spaces is computed.
    double spaces = std::count(alphabets.begin(), alphabets.end(), '_');
    double spacesFrequency = spaces/(size + 1); //Frequency of spaces is computed.
    //The current index is set to 0.
    double currentIndex = 0;
    /*This while-loop iterates through the entire string, and searches for:
    uppercase letters, lowercase letters, and symbols.*/
    while(currentIndex <= size){
        //Checks if the string at current index is an upper case letter.
        if(alphabets.at(currentIndex) >= 'A' && alphabets.at(currentIndex) <= 'Z'){
            upperCaseSymbols ++; //Increments uppercase symbols by 1.
        }
        //Check if the string at current index is lower case letter.
        else if(alphabets.at(currentIndex) >= 'a' && alphabets.at(currentIndex) <= 'z'){
            lowerCaseSymbols++; //Increments lowercase symbols by 1.
        }
        //Checks to see if string at current index is a smybol.
        else if((alphabets.at(currentIndex) != '_') && ((alphabets.at(currentIndex) >= '!' && alphabets.at(currentIndex) <= '@') || (alphabets.at(currentIndex) >= '[' && alphabets.at(currentIndex) <= '`') || (alphabets.at(currentIndex) >= '{' && alphabets.at(currentIndex) <= '~'))){
            symbols += 1;//Increments symbols variable by 1.
        }        
        currentIndex++; //Increments the value of currentIndex by 1.
        
    }
    
    //The frequency of uppercase letters, lowercase letters, and symbols is calculated.
    double upperCaseSymbolsFrequency = upperCaseSymbols / (size+1);
    double lowerCaseSymbolsFrequency = lowerCaseSymbols / (size+1);
    double symbolsFrequency = symbols / (size + 1);
    
    /*These four commands below print the: space frequency, lowercase alphabet frequency,
    uppercase alphabet frequency, and symbols frequency in that order.
    */
    std::cout << std::setprecision(16) << spacesFrequency << std::endl;
    std::cout << std::setprecision(16) << lowerCaseSymbolsFrequency << std::endl;
    std::cout << std::setprecision(16) << upperCaseSymbolsFrequency << std::endl;
    std::cout << std::setprecision(16) << symbolsFrequency << std::endl;
}

//The main function.
int main(){
    //The alphabetspam function is called here.
    alphabetspam();    
    return 0; //0 is returned.
}
