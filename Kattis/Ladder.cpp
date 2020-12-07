#include <iostream>
#include <cmath>


void Ladder(){
    
    double h; //This will store the height of the wall.
    double v; //This will store the angle of the ladder.
    
    std::cin >> h >> v; //The user is prompted to enter height and angle.
    
    double convert_to_radians = v * (M_PI / 180.0); //This converts the degrees to radians.
    
    printf("%d\n", (int) ceil(h/sin(convert_to_radians))); //Performs computation, and prints the answer.
    

}

//This is the main function
int main(){
    Ladder(); //The function is called here.
    return 0; //The main function returns zero signalling successful termination
}

