#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int evaluateCase(int a, int b, int c, int x, int y){
    if(a>x && b>y)return -1;
    else if(a>x && b<y || a<x && b>y)return c+1;
    else return 1;
}

int main() {
    int a, b, c, x, y, z;
    vector<int> cases;
    vector<int> dealt(53, 0);
    while (true){
        cin >> a >> b >> c >> x >> y;
        if(a == 0) break;
        dealt[a] = 1; dealt[b] = 1;  dealt[c] = 1; dealt[x] = 1; dealt[y] = 1;
        cases.push_back(evaluateCase(a,b,c,x,y));
        cases.push_back(evaluateCase(a,c,b,x,y));
        cases.push_back(evaluateCase(b,a,c,x,y));
        cases.push_back(evaluateCase(b,c,a,x,y));
        cases.push_back(evaluateCase(c,a,b,x,y));
        cases.push_back(evaluateCase(c,b,a,x,y));
        sort(cases.begin(), cases.end());
        if(cases.front() == -1)cout << "-1\n";
        else{
            z = cases.back();
            while (dealt[z]){
                z++;
            }
            if(z>52) cout << "-1\n";
            else{
                cout << z << "\n";
            }
        }
        cases.clear();
        dealt.assign(53,0);
    }


}