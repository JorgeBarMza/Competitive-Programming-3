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
//vector<pair<int,int>> buildings;
pair<int,int> buildings[10001];
//vector<int> lisA, ldsA;
int lisA[10001], ldsA[10001];
int lis(int i){
    if(i==0) return buildings[0].second;
    if(lisA[i] != -1) return lisA[i];
    else{
        int maxLis = 0;
        for (int j = 0; j < i ; ++j) {
            if(buildings[j].first < buildings[i].first){
                maxLis = max(maxLis, lis(j));
            }
        }
        lisA[i] = maxLis+buildings[i].second;
        return lisA[i];
    }
}

int lds(int i){
    if(i==0) return buildings[0].second;
    if(ldsA[i] != -1) return ldsA[i];
    else{
        int maxLds = 0;
        for (int j = 0; j < i ; ++j) {
            if(buildings[j].first > buildings[i].first){
                maxLds = max(maxLds, lds(j));
            }
        }
        ldsA[i] = maxLds+buildings[i].second;
        return ldsA[i];
    }
}

int main(){
    std::ios::sync_with_stdio(0);
    int initialTC, TC;
    cin >> initialTC;
    TC = initialTC;
    while(TC--){
        int n; cin >> n;
//        lisA.assign(n,-1);
        memset(lisA, -1, sizeof(lisA));
        memset(ldsA, -1, sizeof(ldsA));
//        ldsA.assign(n,-1);
        vector<int> heights;
//        buildings.clear();
        memset(buildings, 0, sizeof(buildings));
        for (int i = 0; i < n ; ++i) {
            int h; cin >> h;
            heights.push_back(h);
        }
        for (int i = 0; i < n ; ++i) {
            int w; cin >> w;
            buildings[i] = make_pair(heights[i], w);
        }

        int increasing = 0, decreasing = 0;
        for (int i = 0; i < n ; ++i) increasing = max(increasing, lis(i));
        for (int i = 0; i < n ; ++i) decreasing = max(decreasing, lds(i));
        cout << "Case " << initialTC-TC << ". ";
        if(increasing>decreasing) cout << "Increasing (" << increasing << "). Decreasing (" << decreasing << ")." << "\n";
        else                      cout << "Decreasing (" << decreasing << "). Increasing (" << increasing << ")." << "\n";
    }

}