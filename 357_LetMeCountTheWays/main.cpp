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

long long coins[5] = {1,5,10,25,50};
long long memo[5][30005];

long long ways(long long coin, long long n){
    if(coin == 5) return 0;
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(memo[coin][n] != -1) return memo[coin][n];
    return memo[coin][n] = ways(coin +1, n)+ ways(coin, n-coins[coin]);
}

int main(){
    std::ios::sync_with_stdio(0);
    long long n;
    memset(memo, -1, sizeof(memo));
    while(cin >> n){
        long long ans = ways(0,n);
        if(ans>1)
        cout << "There are " << ans << " ways to produce " << n << " cents change."<< "\n";
        else
            cout << "There is only " << ans << " way to produce " << n << " cents change."<< "\n";
    }
}

