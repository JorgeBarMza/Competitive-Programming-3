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
vector<long> rungs;

bool simSucceeded(long k){
    long pastRung= 0;
    for(int i = 0; i<rungs.size(); ++i){
        if(i != 0)pastRung = rungs[i-1];
        if(rungs[i]- pastRung > k) return false;
        if(rungs[i] - pastRung == k) k--;
    }
    return true;
}

int main(){
    std::ios::sync_with_stdio(0);
    int tc, initialTc;
    cin >> tc;
    initialTc = tc;
    while(tc--){
        rungs.clear();
        long n, k;
        cin >> n;
        for (int i = 0; i < n ; ++i) {
            long rung;
            cin >> rung;
            rungs.push_back(rung);
        }
        long ans;
        long low = 0;
        long hi = rungs.back() + rungs.size();
        while(low<hi){
            long mid = (hi+low)/2;
            if(simSucceeded(mid)){
                hi = ans = mid;
            }
            else {
                low = mid+1;
            }
        }
        cout << "Case " << initialTc-tc << ": " << ans << "\n";
    }
}
