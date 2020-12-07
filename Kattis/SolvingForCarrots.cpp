#include <iostream>



void solvingForCarrots(){
    
    int N;
    int problemsSolved;
    
    std::cin >> N;
    std::cin >> problemsSolved;
    
    std::string description;
    
    int i = 0;
    while(i != N + 1){    
        std::getline(std::cin, description);
        i += 1;
        
    }
    
    
    std::cout << problemsSolved;
}


int main(){
    
    solvingForCarrots();
    return 0;
}
