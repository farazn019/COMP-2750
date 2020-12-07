#include <iostream>

int nextRound(){
    int n, k, numberOfContestants = 0;

    std::cin >> n;
    std::cin >> k;

    if(n >= 1){
        int *contestants = new int[n];
        for(int i = 1; i <= n; i++){
            std::cin >> contestants[i];
        }
        for(int j = 1; j <= n; j++){
            if((contestants[j] >= contestants[k]) && (contestants[j] > 0)){
                numberOfContestants++;
            }
        }
        std::cout << numberOfContestants;
        return numberOfContestants;
    }
    else{
        return -1;
    }

}

int main(){
    nextRound();
    return 0;
}