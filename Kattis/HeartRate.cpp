#include <iostream>


//This is the solution.
void heartRate(){
    
    
    //Test cases input and declaration.
    int testCases;
    std::cin >> testCases;
    
    //beats and seconds are declared.
    double beats;
    double seconds;
    
    for(int i = 0; i < testCases; i++){
        //User is prompted to enter number of beats and seconds
        std::cin >> beats;
        std::cin >> seconds;
        
        //This gets the time and divides it with 60.
        double timer = 60 / seconds;
        
        //Calculated actual heart rate.
        double heart_rate = 60 * (beats / seconds);
        
        //Values are printed.
        printf("%.4f %.4f %.4f\n", heart_rate - timer, heart_rate, heart_rate + timer);
    }
}

//This is the main function
int main(){
    heartRate(); //The function is called here.
    return 0; //The function returns 0 signalling successful termination
}
