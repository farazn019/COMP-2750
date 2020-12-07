#include <iostream>


void quadrant_selection(){
    
    //The x and y coordinates are declared.
    int x;
    int y;
    
    //The user is prompted to enter the x and y coordinates.
    std::cin>>x>>y;
    
    //If the point has an x and y value greater than 0, then its in the first quadrant.
    if((x > 0) && (y > 0)){
        std::cout << 1;
    }
    //If the point has an x value greater than 0 and y value less than 0, then its in the third quadrant.
    else if((x > 0) && (y < 0)){
        std::cout << 4;
    }
    //If the point has an x value less than 0 and a y value greater than 0, then its in the second quadrant.
    else if((x < 0) && (y > 0)){
        std::cout << 2;
    }
    //If the point doesnt satisfy the above three criteria, then it has to be in the third quadrant.
    else{
        std::cout << 3;
    }
}


//This is the main function.
int main(){
    quadrant_selection(); //The function is called here.
    return 0; //A value of 0 is returned, signalling successful termination.
}
