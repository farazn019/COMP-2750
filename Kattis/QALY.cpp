#include <iostream>


void QALY(){
    //The cases integer is declared here.
    int cases;
    std::cin >> cases; //The user is prompted to enter a value for the cases.
    
    double QOL; //This contains the quality of life
    double quantityOL; //This contains the quantity of life.
    
    //The inital value of quality of life is set to 0,000.
    double total = 0.000;
    
    /*This for-loop iterates a total of 'cases' times and it takes the product
    of quanlity of life and quantity of life, then adds it to the total.*/
    for(int i = 0; i < cases; i++){
        std::cin >> QOL;
        std::cin >> quantityOL;
        total += (QOL * quantityOL);
    }
    
    //This prints the quality of life.
    printf("%.3f\n", total);
    
}

//This is the main function.
int main(){
    QALY(); //The QALY function is called here.
    return 0; //A value of 0 is returned, signalling successful termination.
}
