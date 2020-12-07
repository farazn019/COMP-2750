#include <iostream>
#include <algorithm>

void APrizeNoOneCanWin(){
    int testCases; //This variable stores the number of items in the store.
    std::cin >> testCases; //The user is prompted to enter the number of items in the store.
    
    int discountPrice; //This variable holds the minimum discount price.
    std::cin >> discountPrice; //The user is prompted to enter the discount price.
    
    //This array holds the items in the store for the sale.
    int itemsInStore[testCases];
    
    //The user is prompted to enter the value for every item in the store.
    for(int i = 0; i < testCases; i++){
        std::cin >> itemsInStore[i];
    }
    //The itemsinStore array is sorted in ascending order.
    std::sort(itemsInStore, itemsInStore + testCases); 
    //The prior price variable is initally set to the first item in the array.
    int priorPrice = itemsInStore[0];
    //The value of the total number of items that the discount can apply to is initally set to 1.
    int totalNumberOfItems = 1;
    //This for-loop iterates through all the elements in the itemsInStore array, and checks if the discount price applies.
    for(int j = 1; j < testCases; j++){
        //Applies the current price with the prior price, to see if the total is greater than the discount price.
        if(itemsInStore[j] + priorPrice > discountPrice){
            break; //If the sum of the current item in the array and the prior price is greater than the discount price, then the program breaks.
        }
        totalNumberOfItems += 1; //The total number of items is incremented by one.
        priorPrice = itemsInStore[j]; //The value of prior price is set to the current item in the store.
    }
    //Prints the number of items that the discount can be applied to.
    std::cout << totalNumberOfItems;
}

//This is the main function/
int main(){
    APrizeNoOneCanWin(); //The solution is called over here.
    return 0; //This is the main function.
}
