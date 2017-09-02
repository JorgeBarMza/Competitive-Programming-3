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
    int bagsNum;
    while(cin >> bagsNum && bagsNum !=0){
        vector<int> initialBags;
        for (int i = 0; i < bagsNum ; ++i) {
            int bag; cin >> bag; initialBags.push_back(bag);
        }
        sort(initialBags.begin(), initialBags.end());
        int maxRep = 0;
        for(auto bag:initialBags){
            maxRep = max(maxRep, (int)count(initialBags.begin(), initialBags.end(), bag));
        }

        vector<vector<int>> bagGroups(maxRep, vector<int>());
        int x = 0;
        for (int i = 0 ; i < initialBags.size() ; ++i) {
            bagGroups[x % maxRep].push_back(initialBags[i]);
            ++x;
        }
        cout << bagGroups.size() << "\n";
        for(auto group:bagGroups){
            for(int i=0; i< group.size()-1; ++i){
                cout << group[i] << " ";
            }
            cout << group[group.size()-1];
            cout << "\n";
        }
        cout << "\n";
    }
}
