#pragma once

// As the file name indicates, this header just contains some various 
// vector functions I made for the purposes of this project.

void printVec(std::vector<char> vec) {
    for (int i = 0; i<vec.size(); i++) {
        std::cout << vec[i];
    }
    std::cout << "\n";
}

void doubleVec(std::vector<char> &vec) {
    size_t vecSize = vec.size();
    for (int i = 1; i<vecSize; i++) {
        vec.push_back(vec[i]);
    }
}
