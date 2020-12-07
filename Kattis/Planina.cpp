#include <iostream>
#include <cmath>

//This function contains the solution to Planina.
void Planina(){
    
    //Gets User input
    int N;
    std::cin >> N; //The user is prompted for input
    int number = (int)pow(2, N) + 1; //The value of N is raised to the power of 2 + 1.
    std::cout << number * number << std::endl; //The value of nubmer is multpilpied by itself.
}


//This is the main function
int main()
{
    Planina(); //The function is called here.
    return 0; //A value of 0 is returned signalling successful termination of the function.
}

