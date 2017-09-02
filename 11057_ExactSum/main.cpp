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
    int booksNum;
    long budget, minDif, i, j;
    while(cin >> booksNum && booksNum != EOF){
        vector<long> bookPrices;
        while(booksNum--) {
            long price;
            cin >> price;
            bookPrices.push_back(price);
        }
        cin >> budget;
        cin;
        minDif = 10000000;
        sort(bookPrices.begin(), bookPrices.end());
        for(auto price: bookPrices){
            long complement = budget-price;
            long difference = abs(price - complement);
            pair<vector<long>::iterator, vector<long>::iterator> bounds;
            if(difference < minDif){
                bounds = equal_range(bookPrices.begin(), bookPrices.end(), complement);
                if(bounds.first == bounds.second) continue;
                long encounter = bounds.first - bookPrices.begin();
                if(complement == price){
                    if(bounds.second - bounds.first < 2) continue;
                    i = j = price;
                    minDif = difference;
                    break;
                }
                i = min(complement, price);
                j = max(complement, price);
                minDif = difference;
            }
        }
        cout << "Peter should buy books whose prices are " << i << " and " << j <<  ".\n\n";
    }
}
