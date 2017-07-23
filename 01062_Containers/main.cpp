#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<stack<char>> stacks;
stack<char> empty;
string s;
int res, t;

int addContainer(char ch){
    for(auto &stack:stacks){
        if(stack.top() >= ch) {
            stack.push(ch);
            return 0;
        }
    }
    stacks.push_back(empty);
    stacks[stacks.size()-1].push(ch);
    return 1;
}

int main() {
    t=0;
    while (cin >> s && s != "end"){
        t++;
        stacks.clear();
        res = 0;
        for(auto c:s){
            res += addContainer(c);
        }
        cout << "Case " << t << ": " << res << "\n";
    }
}
