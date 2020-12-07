#include <iostream>
#include <cstring>
void shattered_cake(){
    
    int W; //This will hold the width of the cake.
    std::cin >> W; //The user will enter the width of the cake.
    int pieces; //This integer will hold the number of pieces the cake is in.
    std::cin >> pieces; //The user enters the number of pieces of the cake.
    
    int area = 0; //This variable will hold the area of the cake.
    
    
    while(pieces --){
        
        int length, width; //These variables will contain the length and the height of the cake.
        
        std::cin >> length >> width; //The user inputs the length and width of the cake.
        
        area += (length * width); //The area is incremented by the length times the width.
    }
    
    std::cout << area/W; //The area divided by the Width is output, to give the length.
}


//The main function is declared here.
int main(){
    shattered_cake(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
