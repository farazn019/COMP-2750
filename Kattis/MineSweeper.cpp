// Created by Faraz Naseem on 2020-09-28.
#include <iostream>
using std::cin;
using std::cout;
//This class will contain the solution for the MineSweeper problem.
class mineSweeper{

//The private variables are stored here.
private:
    //The number of rows, number of columns, and the field number are all private variables.
    int n, m, x = 1;

//The private variables and methods are stored here.
public:

    //The constructor will run the program for the class.
    mineSweeper() {
        std::cin >> n;
        std::cin >> m;
        //As long as the user does not enter 0 for the # of rows or columns the program will keep running.
        while (n != 0 || m != 0) {
            char board[n][m];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    std::cin >> board[i][j];
                }
            }

            int intBoard[n][m] = 0;

            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    //If we look at the top left corner of the matrix, and there is a mine, then we will only add one to the adjacent squares on the board, that do not go off of the board.
                    if((board[i][j] == '*') && (i == 0) && (j == 0)){
                        intBoard[i][j] = -1;
                        intBoard[i][j+1] += 1;
                        intBoard[i+1][j+1] += 1;
                        intBoard[i+1][j] += 1;
                    }
                    //This is the case for when there is a mine at the top right of the matrix, then we will only add one to the adjacent squares on the board, that do not go off of the board.
                    if((board[i][j] == '*') && (i == 0) && (j == m-1)){
                        intBoard[i][j] = -1;
                        intBoard[i][j-1] += 1;
                        intBoard[i+1][j-1] += 1;
                        intBoard[i][j+1] += 1;
                    }
                    if((board[i][j] == '*') && (i == n-1) && (j == 0)){
                        intBoard[i][j] = -1;
                        intBoard[i-1][j] += 1;
                        intBoard[i-1][j+1] += 1;
                        intBoard[i][j+1] += 1;
                    }
                    if((board[i][j] == '*') && (i == n-1) && (j == m-1)){
                        intBoard[i][j] = -1;
                        intBoard[i][j-1] += 1;
                        intBoard[i-1][j-1] += 1;
                        intBoard[i-1][j] += 1;
                    }
                }
            }

            std::cin >> n;
            std::cin >> m;
        }
        std::cout << "Exit!";
    }
};



int main(){
    mineSweeper *board1 = new mineSweeper();
    return 0;
}