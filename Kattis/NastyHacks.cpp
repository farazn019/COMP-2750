#include <iostream>
#include <cmath>

//This function contains the solution to Planina.
void NastyHacks(){
    
    //The number of cases variable is declared here.
    int numOfCases;
    std::cin >> numOfCases; //The user is prompted for input
    
    //Declares necessary variables for computing if its worth it or not.
    int revenueNotAdvertising;
    int revenueAdvertising;
    int cost;
    
    
    //This for-loop iterates through the cases.
    for(int i = 0; i < numOfCases; i++){
        //Gets the user to input the revenue values.
        std::cin >> revenueNotAdvertising;
        std::cin >> revenueAdvertising;
        std::cin >> cost;
        //Determines if the user should advertise.
        if(revenueNotAdvertising < revenueAdvertising - cost){
            std::cout << "advertise" << std::endl;
        }
        //Determines if the user should not advertise.
        else if(revenueNotAdvertising > revenueAdvertising - cost){
            std::cout << "do not advertise" << std::endl;
        }
        //Determines if it matters or not.
        else{
            std::cout << "does not matter" << std::endl;
        }
    }
}


//This is the main function
int main()
{
    NastyHacks(); //The function is called here.
    return 0; //A value of 0 is returned signalling successful termination of the function.
}

