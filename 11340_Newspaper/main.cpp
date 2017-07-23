#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed;
    int t, chars, val, lines;
    unsigned char c;
    double sum;
    string line;
    vector<int> charTable;
    cin >> t;
    while (t--){
        cin >> chars;
        charTable.assign(256, 0);
        sum = 0;
        while (chars--){
            cin >> c >> val;
            charTable[c] = val;
        }

        cin >> lines;
        getchar();
        while(lines--){
            getline(cin,line);
            for(unsigned char ch:line){
                sum += charTable[ch];
            }
        }
        cout << setprecision(2) << sum/100 << "$\n";
    }
}