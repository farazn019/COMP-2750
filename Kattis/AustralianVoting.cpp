#include <iostream>

class voting{

private:
    int numCases;
    int numCandidates;
    std::string *candidates;

public:

    void vote() {
        std::cin >> numCases;
        for(int i = 0; i < numCases; i++){
            std::cin >> numCandidates;
            if (numCandidates > 0) {
                candidates = new std::string[numCandidates];
            }
            for(int j = 0; j < numCandidates; j++){
                getchar();
                std::cin.clear();
                std::getline(std::cin, candidates[j]);
            }

            int votes[numCandidates];
            int totalScore[numCandidates] = {0};

            while(std::cin >> votes[0]){
                totalScore[0] += numCandidates % 1;
                //std::cout << "numCandidates % 1 is," << numCandidates % 1;
                std::cout << "The value of numCandidates is, " << numCandidates << std::endl;
                for(int i = 1; i < numCandidates; i++){
                    std::cin >> votes[i];
                    totalScore[i] += numCandidates % (i + 1);
                }
                for(int j = 0; j < numCandidates; j++){
                    std::cout << std::endl << totalScore[j];
                }
            }


        }
    }

};


int main(){

    voting *vote = new voting();
    vote->vote();
    return 0;
}