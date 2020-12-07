#include <iostream>

int i, j;


int solution(){
    // std::cin >> i >> j;
    while(std::cin >> i >> j) {
        int numOne = i;
        int numTwo = j;
        int currentCycleLength = 1;
        int maxCycleLength = 1;
        if (j >= i) {
            for (int current_value = i; current_value <= j; current_value++) {
                i = current_value;
                while (i != 1) {
                    if (i % 2 == 0) {
                        i = i / 2;
                    } else {
                        i = 3 * i + 1;
                    }
                    currentCycleLength += 1;
                }
                if (currentCycleLength > maxCycleLength) { maxCycleLength = currentCycleLength; }
                currentCycleLength = 1;
            }
            std::cout << numOne << " " << numTwo << " " << maxCycleLength << "\n";
            maxCycleLength = 0;
        } else if (i > j) {
            for (int current_value = i; current_value >= j; current_value--) {
                i = current_value;
                while (i != 1) {
                    if (i % 2 == 0) {
                        i = i / 2;
                    } else {
                        i = 3 * i + 1;
                    }
                    currentCycleLength += 1;
                }
                if (currentCycleLength > maxCycleLength) { maxCycleLength = currentCycleLength; }
                currentCycleLength = 1;
            }
            std::cout << numOne << " " << numTwo << " " << maxCycleLength << "\n";
            maxCycleLength = 0;
        }
    }
    return 0 ;
}



int main(){
    solution();
    return 0;
}