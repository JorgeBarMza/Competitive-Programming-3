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
using namespace std;

int n, classCode, maxPop, maxPopCount;
set<int> combination;
map<set<int>, int> frequencies;
map<set<int>, int>::iterator it;

int main(){
    std::ios::sync_with_stdio(0);
    cin >> n;
    while(n){
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin >> classCode;
                combination.emplace(classCode);
            }
            it = frequencies.find(combination);
            if(it != frequencies.end()){
              ++it->second;
            }
            else{
                frequencies.emplace(combination,1);
            }
            combination.clear();
        }
        maxPop = 0;
        maxPopCount = 0;
        for(auto freq: frequencies){
            if(freq.second > maxPop) {
                maxPop = freq.second;
                maxPopCount = maxPop;
            }
            else if(freq.second == maxPop){
                maxPopCount += maxPop;
            }
        }
        cout << maxPopCount << "\n";
        frequencies.clear();
        cin >> n;
    }
}
