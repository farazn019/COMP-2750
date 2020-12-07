#include <iostream>


void Pet(){
    
    int matrix[5][4]; //A matrix with 5 rows and 4 columns is created to store the scores.
    int maxScore = 0, winner = 0; //maxScore and winner have inital values of 0.
    //This for-loop will iterate through the rows.
    for(int i = 0; i < 5; i++){
        //The inital value of total is 0.
        int total = 0;
        //This for-loop will iterate through the columns in each row.
        for(int j = 0; j < 4; j++){
            //The user will be promped to enter each value for the rows and columns.
            std::cin >> matrix[i][j];
            //The value of total will be increased by the value that the user entered above.
            total += matrix[i][j];
        }
        //If the total score is greater than the maxScore, then maxScore now becomes total score.
        if(total>maxScore){
            maxScore=total; //maxScore becomes total.
            winner=i; //Winner is set to row i.
        }
    }
    //The values are output.
    std::cout << 1 + winner << " " << maxScore;
}


//This is the main function.
int main(){
    Pet(); //The function is called here.
    return 0; //A value of 0 is returned, signalling successful termination.
}
