#include <iostream>
#include <vector>
#include <algorithm>


class computeDistance{

private:
    int testCases;
    int familyMembers;

    std::vector<int> distance;
    int currentDistance;


public:
    void computation() {
        std::cin >> testCases;
        for (int i = 0; i < testCases; i++) {
            std::cin >> familyMembers;
            for (int j = 0; j < familyMembers; j++) {
                std::cin >> currentDistance;
                distance.insert(distance.begin() + j, currentDistance);
            }
            std::sort(distance.begin(), distance.end());
            int minDistance = distance.end() - distance.begin();
            std::cout << "Distance end: " << distance.end() << ". Distance begin: " << distance.begin() << std::endl;
            std::cout << "The distance was, " << minDistance << std::endl;
        }
    }
};



int main(){
    computeDistance *distance = new computeDistance();
    distance->computation();
    return 0;
}