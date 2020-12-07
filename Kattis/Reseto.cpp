#include <iostream>
#include <algorithm>

//This function contains the solution for the Reseto problem.
void Reseto(){
    int N; //This variable holds the N-th number (last number).
    int K; //This variable holds the K-th number (number to be crossed out).
    
    std::cin >> N; //The user is asked to input the last number.
    std::cin >> K; //The user is asked to input the number to be crossed out.
    
    //Variables which are required for this algorithm to run, are declared here.
    int inital_k_value = 0, start_number = 2, numsremoved = 0, values[N + 1];
    
    //The values of the first and second position of the values array is set to 0.
    values[0] = 0;
    values[1] = 0;
    
    //This for-loop starts from 2 and goes through N -2 iterations, to populate the values array.
    for(int i = 2; i < N + 1; i++){
        values[i] = i;
    }
    
    //This program will continue to run until the K-th number is found.
    while(inital_k_value < K){
        //Loops through the values array.
        for(int j = start_number; j <= N; j += start_number){
            //If the values if 0, then the for-loop will skip to the next iteration.
            if(values[j] == 0){continue;}
            //The removed number is equal to the values array at index j.
            numsremoved = values[j];
            //The new value of values at index j is now 0.
            values[j] = 0;
            inital_k_value += 1; //A number is founds, and the inital_k_value variable is incremented.
            if(inital_k_value == K){ break;} //If the K-th number is found, then the loop will terminate.
        }
        //The if-statement will run if the number of k values in the algorithm is less than the specified amount.
        if(inital_k_value < K){
            //This for-loop will iterate through the values array starting at index start_number (2).
            for(int k = start_number; k < N+1; k++){
                //If the value at index k is not zero, then this if-statement will run.
                if(values[k] != 0){
                    start_number = k; //The value of start number is now k.
                    break; //We break out of the for-loop.
                }
            }
        }
        std::cout << numsremoved; //The K-th number to be removed is printed out.
    }
}





//This is the main function/
int main(){
    Reseto(); //The solution is called over here.
    return 0; //This is the main function.
}
