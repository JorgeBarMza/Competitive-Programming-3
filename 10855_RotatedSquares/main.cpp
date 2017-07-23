#include <iostream>
#include <vector>
using namespace std;

vector<string> bigVec;
vector<string> v;
vector<string> v90;
vector<string> v180;
vector<string> v270;
int countV;
int countV90;
int countV180;
int countV270;
int N, n;
string s;

int subSquares(vector<string> big, vector<string> small){
    int bigSize = big.size();
    int smallSize = small.size();
    int count = 0;
    bool match = true;

    int substrings = bigSize-smallSize+1;

    for (int i = 0; i < substrings ; ++i) {
        for (int j = 0; j < substrings ; ++j) {
            for (int k = 0; k < smallSize; ++k) {
                string a = big[i+k].substr(j,smallSize);
                string b = small[k];
                if(big[i+k].substr(j,smallSize) != small[k]){
                    match = false;
                    break;
                }
                int z = 0;
            }
            if(match) count++;
            match = true;
       }
    }
    return count;
}

vector<string> rotate90(vector<string> vec){
    int size = vec.size();
    vector<string> rotated(size);
    for (int i = 0; i < size; ++i) {
        for (int j = size-1; j >= 0; --j) {
           rotated[i]+=vec[j][i];
        }
    }
    return rotated;
}

int main() {
    while(cin >> N >> n && (N != 0 || n !=0)){
        bigVec.clear();
        v.clear();
        v90.clear();
        v180.clear();
        v270.clear();
        while(N--){
            cin >> s;
            bigVec.push_back(s);
        }

        while(n--){
            cin >> s;
            v.push_back(s);
        }

        v90 = rotate90(v);
        v180 = rotate90(v90);
        v270 = rotate90(v180);

        cout << subSquares(bigVec,v) << " " << subSquares(bigVec, v90) << " " << subSquares(bigVec, v180) << " " << subSquares(bigVec, v270) << "\n";
    }
}