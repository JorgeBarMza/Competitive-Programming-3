//
//  main.cpp
//  Permutations
//
//  Created by Jorge Barrios on 5/18/17.
//  Copyright © 2017 Jorge Barrios. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j'};
    do {
        for (auto c:alphabet) {
            cout << c << " ";
        }
        cout << "\n";
    } while(next_permutation(alphabet.begin(), alphabet.end()));
    
}
