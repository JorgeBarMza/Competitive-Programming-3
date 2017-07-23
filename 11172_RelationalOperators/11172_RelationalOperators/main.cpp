//
//  main.cpp
//  11172_RelationalOperators
//
//  Created by Jorge Barrios on 5/18/17.
//  Copyright © 2017 Jorge Barrios. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    long long a,b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a>b) cout << ">\n";
        else if(a<b) cout << "<\n";
        else cout << "=\n";
    }
}
