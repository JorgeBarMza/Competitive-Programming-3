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

int t, l, m, len, trips, load;
string arrival;
bool onLeftSide;

int main(){
    std::ios::sync_with_stdio(0);
    queue<int> left;
    queue<int> right;

    cin >> t;
    while(t--){
        cin >> l >> m;
        l *= 100;
        while(m--){
            cin >> len >> arrival;
            if(arrival == "left") left.push(len);
            else right.push(len);
        }
        trips = 0;
        onLeftSide = false;

        while (!left.empty() || !right.empty()){
            trips++;
            load = 0;
            onLeftSide = !onLeftSide;
            while (1) {
                if(onLeftSide){
                    load += left.front();
                    if(load > l || left.empty()){
                        break;
                    }
                    else left.pop();
                }
                else{
                    load += right.front();
                    if(load > l || right.empty()){
                        break;
                    }
                    else right.pop();
                }
            }
        }
        cout << trips << "\n";
    }
}
