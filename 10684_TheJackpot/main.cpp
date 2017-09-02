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
    int size;
    while(cin >> size && size !=0){
        vector<int> nums;
        while(size--) {
            int num; cin >> num; nums.push_back(num);
        }
        int sum = 0; int ans = 0;
        for (int i = 0; i < nums.size() ; ++i) {
            sum += nums[i];
            ans = max(ans, (sum > 0) ? sum : sum = 0);
        }
        if(ans > 0) cout <<  "The maximum winning streak is " << ans << ".\n";
        else cout << "Losing streak.\n";
    }
}


