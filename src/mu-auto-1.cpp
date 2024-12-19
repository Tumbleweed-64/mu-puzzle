#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include "vec_utils.h"

int main() {

    std::vector<char> MU = {'M', 'I'};
    
    // these are some sequences needed to search for in order to apply rules 3 and 4
    std::vector<char> UU = {'U', 'U'};
    std::vector<char> III = {'I', 'I', 'I'};
    char command;
    
    std::cout << "Welcome to the MU-Puzzle theorem finder. Please note that there is no real solution to this puzzle, this is just for fun.\n";
    std::cout << "Press enter to start.\n";
    // the value of this variable doesn't really matter for now, eventually I'll add a few methods of making theorems
    while (command != 'q') {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
        // Needed ASCII values: 85 (U), 73 (I)
    
        std::vector<char>::iterator findDoubleU = std::search(MU.begin(), MU.end(), UU.begin(), UU.end());
        std::vector<char>::iterator findTripleI = std::search(MU.begin(), MU.end(), III.begin(), III.end());
        
        if (MU.back() == 73) {
            std::cout << "Applying Rule 1\n";
            MU.push_back(85);
            printVec(MU);
        }
        else if (findDoubleU != MU.end()) {
            std::cout << "Applying Rule 4\n";
            MU.erase(MU.begin()+*findDoubleU, MU.begin()+(*findDoubleU+1));
            printVec(MU);
        }
        else if (findTripleI != MU.end()) {
            std::cout << "Applying Rule 3\n";
            MU.erase(MU.begin()+*findTripleI, MU.begin()+(*findTripleI+2));
            printVec(MU);
        }
        else {
            std::cout << "Applying Rule 2\n";
            doubleVec(MU);
            printVec(MU);
        }
    }

    return 0;
}
