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
    int n, num, TC;
    cin >> TC;
    while(TC--){
        cin >> n;
        int maxSubrect = -100*n*2*n;
        vector<vector<int>> grid(2*n, vector<int>(2*n));
        for (int i = 0; i < 2*n ; ++i) {
            for (int j = 0; j < 2*n ; ++j) {
                if(i<n && j < n){
                    cin >> num;
                    grid[i][j] = grid[i+n][j] = grid[i][j+n] = grid[i+n][j+n] = num;
                }
                if(i > 0) grid[i][j] += grid[i-1][j];
                if(j > 0) grid[i][j] += grid[i][j-1];
                if(i > 0 && j > 0) grid[i][j] -= grid[i-1][j-1];
            }
        }

        for (int i = 0; i < 2*n; ++i) for (int j = 0; j < 2*n ; ++j)
                for (int k = i; k < 2*n ; ++k) for (int l = j; l < 2*n ; ++l){
                        if(k-i > n -1 || l-j > n-1) continue;
                        int subRect = grid[k][l];
                        if(i>0) subRect-= grid[i-1][l];
                        if(j>0) subRect-= grid[k][j-1];
                        if(i>0 && j>0) subRect += grid[i-1][j-1];
                        maxSubrect = max(maxSubrect, subRect);
                    }

        cout << maxSubrect << "\n";
    }
}
