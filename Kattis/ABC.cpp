#include <iostream>
#include <algorithm>


void ABC(){
    
    int numbers[3]; //String for the three numbers.
    char alphabets[4]; //String for the letters A, B, and C.

    scanf("%d %d %d", numbers[0], numbers[1], numbers[2]);
    scanf("%s", alphabets);
    
    std::string num[3];
    

    //Sorts the numbers in ascending order.
    std::sort(numbers.begin(), numbers.end());
    
    //Removes the white space from the numbers string.
    //numbers.erase(std::remove(numbers.begin(), numbers.end(), ' '), numbers.end());
    
    //The iterator is declared here, and set to an inital value of 0.
    int i = 0;
    //The while-loop will loop through the string as long as the value of the iterator is less than or equal to 2.
    while(i <= 2){
        //If the current character is A, then the smallest number is printed.
        if(alphabets.at(i) == 'A'){
            std::cout << numbers.at(0)- 'A';
        }
        //If the current character is B, then the second smallest number is printed.
        else if(alphabets.at(i) == 'B'){
            std::cout << numbers.at(1) - 'A';
        }
        //If the current character is C, then the largest charactre is printed.
        else if(alphabets.at(i) == 'C'){
            std::cout << numbers.at(2) - 'A';
        }
        //The iterator is increased by a value of 1.
        ++i;
        //A space is added to seperate the current number and the next number.
        std::cout << ' ';
    }
    //A new line is added.
    std::cout << std::endl;
}

//The main function,
int main(){
    //The function is run.
    ABC();
    return 0; //A value of 0 is returned signalling successful termination.
}
