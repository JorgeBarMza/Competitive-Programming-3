#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <bitset>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    string edge, vertices;
    char v1, v2;
    bitset<26> connected;
    int tests, acornsNum, verticeNum, edgesNum, treesNum, treesSubtract;

    cin >> tests;
    while(tests--){
        acornsNum = 0;
        verticeNum = 0;
        edgesNum = 0;
        treesNum = 0;
        treesSubtract = 0;
        connected.reset();
        cin >> edge;
        while(edge[0] != '*'){
            v1 = edge[1];
            v2 = edge[3];
            connected.set(v1-65, 1);
            connected.set(v2-65, 1);
            ++edgesNum;
            cin >> edge;
        }
        cin >> vertices;
        for (int i = 0; i < vertices.size(); i+=2) {
            char v = vertices[i];
            ++verticeNum;
           if(connected.test(v-65) == false){
               ++acornsNum;
           }
        }
        treesNum = verticeNum - edgesNum - acornsNum;

        cout <<"There are " << treesNum << " tree(s) and " << acornsNum << " acorn(s).\n";
    }

}
