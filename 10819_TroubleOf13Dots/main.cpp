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
int n, w[105], v[105], m;
int memo[105][10005];
bool bonus;

int knapsack(int id, int we){
    if(we > m && m < 1800) return -1000;
    if(we > m + 200) return -1000;
    if(id == n){
        if(we > m && we <= 2000) return -1000;
        return 0;
    }
    if(memo[id][we] != -1) return memo[id][we];
    return memo[id][we] = max(knapsack(id+1,we), v[id] + knapsack(id+1, we + w[id]));
}

int main(){
	std::ios::sync_with_stdio(0);
    while(cin >> m >> n && m != EOF){
        memset(w,0, sizeof(w)); memset(v,0, sizeof(v)); memset(memo,-1, sizeof(memo));
        for (int i = 0; i < n ; ++i) cin >> w[i] >> v[i];
        cout << knapsack(0, 0) << "\n";
    }
}