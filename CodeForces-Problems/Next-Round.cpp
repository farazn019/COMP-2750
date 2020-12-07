#include <iostream>
#include <cstdlib>
using namespace std;

int n;
int k;
int *userScores = new int[n];

int main(){

    cin >> n;
    cin >> k;
    if((n < 1) || (n > 50) || (k > n) || (k < 1) || (50 < k)){
        return 0;
    }




    cout << "\n";

    for(int i = 0; i < n; i++){
        cin >> userScores[i];
    }

    int movingOn = 0;

    for(int j = 0; j < n; j++){
        if ((userScores[j] >= userScores[k]) && (userScores[j] > 0)){
            movingOn++;
        }
    }

    cout << movingOn;




}
