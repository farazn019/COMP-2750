//Created by Faraz Naseem..... Aaah! - Kattis Problem.

//The input output stream library is imported.
#include <iostream>

//This function contains the solution to the problem.
void solution(){
    //These two strings, will be store the user's string values.
    std::string line_one, line_two;
    std::cin >> line_one; //John's "aaaah"
    std::cin >> line_two; //The "aaaah" that the doctor wants.

    //If John's "aaah" is greater than the "aaaah" the doctor wants, then "go" will be printed.
    if(line_one.length() >= line_two.length()){
        std::cout << "go";
    }
        //Else "no" will be printed.
    else{
        std::cout << "no";
    }
}


//The main function.
int main()
{
    //The solution function in run.
    solution();
    return 0;
}
