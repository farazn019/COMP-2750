#include <iostream>

int subtraction(){
    int n, k;
    std::cin >> n;
    std::cin >> k;

    for(int i = 0; i < k; i++){

        if(n % 10 == 0){
            n/= 10;
        }

        else{
            n -= 1;
        }
    }
    return(n);
}



int main(){
    std::cout << subtraction();
    return 0;
}