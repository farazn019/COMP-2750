//Created By Faraz Naseem..... November 21, 2020.


#include <iostream>
#include <vector> //The vector library is imported.
#include <algorithm> //The algorithm library is imported.
#include <cmath> //The math library is imported.

//The class computeDistance contains all the code to solve this problem.
class computeDistance{

    //All the private variables are declared here.
private:
    int testCases;
    int familyMembers;
    int currentDistance;
    int *sumOfDistance;

//All the public variables are declared here.
public:
    //This function performs the computation to calculate the sum of distances.
    void computation() {
        std::cin >> testCases; //The user is prompted to enter the number of test cases.
        sumOfDistance = new int [testCases];

        for (int i = 0; i < testCases; i++) {
            std::vector<int> *distance = new std::vector<int>; //A new vector is declared every time there is a new test case.
            std::cin >> familyMembers; //The user is prompted to enter the number of family members.
            //In a for-loop the distance from Vito's house to each of his family members will be entered by the user.
            for (int j = 0; j < familyMembers; j++) {
                std::cin >> currentDistance; //The distance between Vito's house and his family member's is entered.
                //The value of the distance between Vito's house and his family member's is pused to the very beginning of the vector.
                distance->push_back(currentDistance);
            }
            std::sort(distance->begin(), distance->end()); //The vector of distances is sorted,
            //The median value of the vector is calculated.
            int medianValue = distance->at(ceil(distance->size() / 2));
            //In a for-loop the absolute value of the difference between the distance of the middle house and every one of Vito's family member's is summed.
            for(int k = 0; k < distance->size(); k++){
                sumOfDistance[i] += abs(medianValue - distance->at(k));
            }
        }
    }

    //This function prints to sum of distances.
    void output(){
        //This for-loop prints all the sums of distances in a for-loop.
        for(int i = 0; i < testCases; i++){
            std::cout << sumOfDistance[i] << std::endl;
        }
    }
};


//This is the main function.
int main(){
    computeDistance *distance = new computeDistance();
    distance->computation();
    distance->output();
    return 0; //A value of 0 is returned for successful termination.
}