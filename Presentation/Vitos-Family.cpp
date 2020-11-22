#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class computeDistance{

private:
    int testCases;
    int familyMembers;
    int currentDistance;
    int *outputDistance;
    int *sumOfDistance;

public:
    void computation() {
        std::cin >> testCases;
        outputDistance = new int [testCases];
        sumOfDistance = new int [testCases];
        for (int i = 0; i < testCases; i++) {
            std::vector<int> *distance = new std::vector<int>;
            std::cin >> familyMembers;
            for (int j = 0; j < familyMembers; j++) {
                std::cin >> currentDistance;
                distance->push_back(currentDistance);
            }
            std::sort(distance->begin(), distance->end());
            int medianValue = distance->at(ceil(distance->size() / 2));
            for(int k = 0; k < distance->size(); k++){
                sumOfDistance[i] += abs(medianValue - distance->at(k));
            }
        }
    }

    void output(){
        for(int i = 0; i < testCases; i++){
            std::cout << sumOfDistance[i] << std::endl;
        }
    }
};



int main(){
    computeDistance *distance = new computeDistance();
    distance->computation();
    distance->output();
    return 0;
}