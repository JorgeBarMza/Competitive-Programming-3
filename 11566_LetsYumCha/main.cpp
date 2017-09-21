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
vector<vector<int>> dimSums;
vector<int> timesOrdered;
int n, x, t, k, totalCost, maxDishes;

double knapsack(int dish, int spent, int favour){
	if(ceil(spent*1.1) > totalCost) return -1;
	if(dish == maxDishes ) return favour/(n+1);
	double addCost = (spent + dimSums[dish% k][0]);
	double addFavour = favour;
	for (int i = 1; i < n+1 ; ++i) addFavour += dimSums[dish % k][i];
	double skip = knapsack(dish +1, spent, favour);
	if(timesOrdered[dish % k] == 2) return skip;
	double take = knapsack(dish +1, addCost,addFavour);
	if(take > skip) {
		timesOrdered[dish % k] += 1;
		return take;
	}
	return skip;
}

int main(){
    //Status: WA
	std::ios::sync_with_stdio(0);
	while(cin >> n >> x >> t >> k && n!= 0){
		dimSums.assign(k, vector<int>(n+2, 0));
		timesOrdered.assign(k,0);
		totalCost = x*(n+1);
		maxDishes = 2*(n+1);
		for (int i = 0; i < k ; ++i) {
			cin >> dimSums[i][0];
			for (int j = 1; j < n + 2 ; ++j) {
				cin >> dimSums[i][j];
			}
		}
		cout << knapsack(0,t*(n+1),0);
	}

}