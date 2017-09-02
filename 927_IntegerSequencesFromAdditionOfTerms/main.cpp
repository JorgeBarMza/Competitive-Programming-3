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

int tests, degree;
long d, k;
long long sum, bk;

int main(){
    std::ios::sync_with_stdio(0);
    cin >> tests;

    while (tests--){

        cin >> degree;
        vector<int> coefs;
        for (int i = 0; i < degree+1 ; ++i) {
            int coef;
            cin >> coef;
            coefs.push_back(coef);
        }
        cin >> d;
        cin >> k;

        sum = 0;
        for (int n = 1; n < k+1 ; ++n) {
            sum += n*d;
            if(sum >= k){
                bk = 0;
                for (int exp = 0; exp <= degree ; ++exp) {
                    bk += ((long long) coefs[exp]) * ((long long) pow((long) n, exp));
                }
                cout << bk << "\n";
                break;
            }
        }

    }
}

