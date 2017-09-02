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
using namespace std;

priority_queue<pair<int, int>> registerQueue;
int qNum, period, queries;
pair<int, int> currentRegister;
string instruction;
int periods[4000];

int main(){
std::ios::sync_with_stdio(0);
    getline(cin,instruction);
    while (instruction != "#"){
        string word;
        std::vector<std::string> array;
        std::size_t pos = 0, found;
        while((found = instruction.find_first_of(' ', pos)) != std::string::npos) {
        if(instruction.substr(pos, found - pos) == "") {
            pos = found+1;
            continue;
        }
        array.push_back(instruction.substr(pos, found - pos));
        pos = found+1;
    }
        array.push_back(instruction.substr(pos));
        qNum = stoi(array[1])*-1;
        period = stoi(array[2])*-1;
        periods[qNum*-1] = period*-1;
        registerQueue.push(make_pair(period,qNum));
        getline(cin,instruction);
    }

    cin >> queries;

    while (queries--){
        currentRegister = registerQueue.top();
        cout << currentRegister.second*-1 << "\n";
        registerQueue.pop();
        registerQueue.push(make_pair(currentRegister.first-periods[currentRegister.second*-1],currentRegister.second));
    }
}
