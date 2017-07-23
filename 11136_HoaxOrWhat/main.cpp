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

int n, billsNum, billAmount;
long amountPaid;
multiset<long> bills;

int main(){
std::ios::sync_with_stdio(0);
    cin >> n;
    while(n){
        bills.clear();
        amountPaid = 0;
        while (n--){
            cin >> billsNum;
            while(billsNum--){
                cin >> billAmount;
                bills.emplace(billAmount);
            }
            amountPaid += *--bills.end()-*bills.begin();

            bills.erase(--bills.end());
            bills.erase(bills.begin());
        }
        cout << amountPaid << "\n";
        cin >> n;
    }
}
