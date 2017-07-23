#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int dimensions, corner, corners, reducingCorners, res;
vector<int> weights;
vector<long long> weightsSum;
long long sum, maxim;

int main() {
    std::ios::sync_with_stdio(false);
    while(cin >> dimensions && dimensions != EOF){
        weights.clear();
        weightsSum.clear();
        bitset<16> bits(0);
        maxim = 0;
       corners = 1<<dimensions;
        reducingCorners = corners;
        while(reducingCorners--){
            cin >> corner;
            weights.push_back(corner);
        }

        weightsSum.assign(corners,0);
        for (int i = 0; i < corners; ++i) {
            for (int j = i+1; j < corners; ++j) {
                bits = bitset<16>(i^j);
                if(bits.count() == 1){
                    weightsSum[i] += weights[j];
                    weightsSum[j] += weights[i];
                }
            }
        }

        for (int i = 0; i < corners; ++i) {
            for (int j = 0; j < corners; ++j) {
                if(i==j) continue;
                bits = bitset<16>(i^j);
                if(bits.count() == 1){
                    sum = weightsSum[i] + weightsSum[j];
                    maxim = max(sum,maxim);
                }
            }
        }
        cout << maxim << "\n";
    }
}
