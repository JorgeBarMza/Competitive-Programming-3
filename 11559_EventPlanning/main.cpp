#include <iostream>
using namespace std;
int main() {
    int participants, budget, hotels, weeks, price, available, minPrice = 10001, minCost;
    while(cin >> participants >> budget >> hotels >> weeks){

        for (int i = 0; i < hotels; ++i) {
           cin >> price;
            for (int j = 0; j < weeks; ++j) {
               cin >> available;
                if(available >= participants && price < minPrice && participants*price <= budget){
                    minCost = participants*price;
                    minPrice = price;
                }
            }
        }
        if(minPrice == 10001) cout << "stay home\n";
        else cout << minCost << "\n";
        minPrice = 10001;
    }
}