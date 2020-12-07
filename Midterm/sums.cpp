//Created By Faraz Naseem..... October 26, 2020...... Sums Question:
#include <iostream>

//This class will compute the successive pairs.
class sums{
private:
    int numCases;

public:
    //This function will get the number of test-cases, which will be input by the user.
    int getCases(){
        std::cin >> this->numCases; //Asks the user for input.
        return(this->numCases); //Returns the input which the user was prompted for.
    }


    void computeNumbers(){
        int number; //This variable will hold the number, which will be input by the user, per each test case.
        bool hasPairs = false; //This variable will determine if there was at least a pair of consecutive integers found.
        std::cin >> number; //The user is prompted for input to enter a number.
        int ceil_half_number = (number+1)/2;
        //The inital value for the consecutive integers begins at 1, and will loop until N-1 (inclusive).
        for (int firstNumber = 1; firstNumber<ceil_half_number; firstNumber++){
            //This for-loop will start at 0, and continue going until the varible "firstNumber" (exclusive).
            for (int beforeFirstNumber = 0; beforeFirstNumber<firstNumber; beforeFirstNumber++) {
                //The computation in this if-statement is used to check if there is at least a pair corresponding to the consecutive sum number that was input by the user.
                if ((number + number) == (firstNumber-beforeFirstNumber)*(firstNumber+(beforeFirstNumber+1))) {
                    hasPairs = true; //The variable hasPairs is set to true.
                    std::cout << number << " = "; //Prints the user-input number.
                    std::cout << ++beforeFirstNumber; //Increments the very first number out of the pair by 1, and prints it out.
                    //The numbers are printed here.
                    if(hasPairs == true){
                        for (int consecutiveNumber = beforeFirstNumber + 1; consecutiveNumber<= firstNumber; consecutiveNumber++){
                            std::cout << " + " << consecutiveNumber;
                        }
                        std::cout << std::endl;
                        return;
                    }

                }
            }
        }
        //If at least a pair isn't found, then it will print out "IMPOSSIBLE".
        if(hasPairs == false){
            std::cout << "IMPOSSIBLE" << std::endl;
        }
    }

    //This function will actually compute the successive integers, and if no match is found, will [print] IMPOSSIBLE.
    void getNumbers(){
        int numberOfCases = this->getCases(); //This variable holds the number of test cases.
        for(int i = 0; i < numberOfCases; i++){
            computeNumbers();
        }
    }
};


//The main function.
int main(){
    sums *sum = new sums();
    sum->getNumbers();
    return 0;
}