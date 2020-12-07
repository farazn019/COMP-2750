#include <iostream>
#include <algorithm>

//This is the solution.
void greetings(){
    //Declares an integer, representing cost per square meter..
    double C;
    std::cin >> C; //User is prompted to input cost.
    
    //Declares a integer, representing the number of yards to cover.
    int yards;
    std::cin >> yards; //User is prompted to input number of yards.
    
    //Width and height variable are declared.
    double width;
    double height;
    
    //Total area to cover.
    double total = 0;
    for(int i = 0; i < yards; i++){
        //User is prompted to input the wdith and height.
        std::cin >> width;
        std::cin >> height;
        
        total += (width * height);
    }
    
    //Makes final calculation.
    total = total * C;
    printf("%.7f", total); //Prints the total value.

}

//This is the main function
int main(){
    greetings(); //The function is called here.
    return 0; //The function returns 0 signalling successful termination
}
