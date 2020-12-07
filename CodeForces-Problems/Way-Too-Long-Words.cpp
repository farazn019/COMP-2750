#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
int main()
{
    int n;
    cin >> n;

    string word;

    for(int i = 0; i < n; i ++){
        cin >> word;

        int sizeOfWord = word.size();
        int lastWord = sizeOfWord - 1;

        if(sizeOfWord > 10){
            sizeOfWord = sizeOfWord - 2;
            cout << word[0] << sizeOfWord << word[lastWord] << endl;
        }

        else if(sizeOfWord <= 10){
            cout << word << endl;
        }
    }

    return 0;
}
