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

int monthsMask;
long long s, d;
long long highestEarnings, totalEarnings;

long long earnings(int begin, int end){
    long long earnings = 0;
    for (int month = begin; month <= end; ++month) {
        int surplussed = (monthsMask & (1 << month))? 1:0;
        if(surplussed) earnings += s;
        else earnings -= d;
    }
    return earnings;

}

bool deficitTerm(int month){
    if(month < 5) return true;
    long long periodEarnings = earnings(month-5, month-1);
    return (periodEarnings < 0);
}

bool backtrack(int month){
    if(!deficitTerm(month)){
        return false;
    }
    if(month == 12){
        totalEarnings = earnings(0,11);
        highestEarnings = max(highestEarnings, totalEarnings);
        return true;
    }
    monthsMask |= (1 << month);
    if(backtrack(month+1)){
        return true;
    }else{
        monthsMask -= pow(2,month);
        return backtrack(month+1);
    }

}

int main(){
    std::ios::sync_with_stdio(0);
    while(cin >> s >> d){
        monthsMask = 0;
        highestEarnings = -1;
        backtrack(0);
        if(highestEarnings < 0) cout << "Deficit\n";
        else cout << highestEarnings << "\n";
    }
}