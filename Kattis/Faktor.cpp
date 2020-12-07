#include <iostream>
#include<bits/stdc++.h> 

//This is the solution.
void Faktor(){
    int A; //Number of Articles we will publish
    int I; //Impact factor that the owner requires.
    
    //The user is required to enter values for A and I.
    std::cin >> A >> I;
    
    //The formula to output is computed here.
    int factor = (A * (I - 1)) + 1;
    std::cout << factor; //The formula is output.
}

//This is the main function
int main(){
    Faktor(); //The function is called here.
    return 0; //The function returns 0 signalling successful termination
}
