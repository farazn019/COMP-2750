#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void print(int n, int start, int nums) {
    cout << n << " = ";
    for(int i = 0; i < nums; i++) {
        cout << start+i;
        if(i != nums-1) cout << " + ";
    }
    cout << endl;
}



void solve() {
    long long n;
    std::cin >> n;

    long long consecutiveNumbers = 2;
    bool booleanValue = true
    while(booleanValue) {
        long long upperNum = consecutiveNumbers * (consecutiveNumbers-1) / 2;

        long long tempNumber = n - upperNum;
        if(tempNumber <= 0) break;


        if(tempNumber % upperNum == 0) {
            print(n, tempNumber / consecutiveNumbers, consecutiveNumbers);
            return;
        }

        consecutiveNumbers++;
    }
}