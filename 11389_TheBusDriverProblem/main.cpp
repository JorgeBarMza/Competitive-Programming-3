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
    int n, d, r;
    while(cin >> n >> d >> r && n != 0 && d !=0 && r != 0){
        vector<int> mRoutes;
        vector<int> aRoutes;
        for (int i = 0; i < n ; ++i) {
            int route;
            cin >> route; mRoutes.push_back(route);
        }
        for (int i = 0; i < n ; ++i) {
            int route;
            cin >> route; aRoutes.push_back(route);
        }
        int excess = 0;
        sort(mRoutes.begin(), mRoutes.end());
        sort(aRoutes.begin(), aRoutes.end());

        for (int i = 0; i < n ; ++i) {
            if(mRoutes[i] + aRoutes[n-i-1] > d) excess += mRoutes[i] + aRoutes[n-i-1] - d;
        }
        cout << excess*r << "\n";
    }
}
