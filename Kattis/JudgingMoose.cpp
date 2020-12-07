#include <iostream>
#include <cmath>


void JudgingMoose(){
    
    int l; //This variable will hold number of tins on left side.
    int r; //This variable will hold number of tins on right side.
    
    std::cin >> l >> r; //User will be asked to input number of tins on left and right side, respectively.
    
    //If the moose has no tins of left and right side, then a messgae will print saying that this is not a moose.
    if(l == 0 && r == 0){
        std::cout << "Not a moose";
    }
    
    //If the moose has tins then:
    else{
        //Will print odd if two sides dont match up.
        if(l != r){
            std::cout << "Odd ";
        }
        //Will print even if both sides match up.
        else{
            std::cout << "Even ";
        }
        //If left side has more or equal to right side, then we will add l with l.
        if(l >= r){
            std::cout << l + l;
        }
        //If right side less than left side, then we will add r with r.
        else{
            std::cout << r + r;
        }
    }
    

}

//This is the main function
int main(){
    JudgingMoose(); //The function is called here.
    return 0; //The main function returns zero signalling successful termination
}
