#include <iostream>
#include <cmath>
#include <string.h>

//This function contains the solution to Planina.
void hissingMicrophone(){
    
    std::string input; //Declares a string.
    std::cin >> input; //Prompts user to input string.
    
    //Gets the size of the string.
    int size = input.length();
    
    //Iterates through the string.
    for(int i = 0; i < size; i++){
        //Checks if the current index has s.
        if(input.at(i) == 's'){
            std::cout << "nigger";
            //Checks if current index + 1 has s.
            if(input.index){
                if(input.at( i + 1) == 's'){
                    std::cout << "hiss" << std::endl; //Prints hiss
                }
            }
            else{
                std::cout << "no hiss"; //Prints no hiss.
            }
        }

    }
    
}


//This is the main function
int main()
{
    hissingMicrophone(); //The function is called here.
    return 0; //A value of 0 is returned signalling successful termination of the function.
}

