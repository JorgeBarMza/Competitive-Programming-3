#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

string s;
vector<string> dict;
vector<string> sortedWordsDic;
vector<int> notAnanas;
vector<string> ananas;
bool isAnana;

bool myLexCompare(string a, string b){
    return lexicographical_compare(a.begin(),a.end(),b.begin(),b.end());
}

int main() {

    while (cin >> s && s[0] != '#'){
        dict.push_back(s);
        for(auto &c:s) c = tolower(c);
        sort(s.begin(),s.end());
        sortedWordsDic.push_back(s);
    }

    notAnanas.assign(dict.size(), 0);

    for(int i=0; i<sortedWordsDic.size(); ++i) {
        if (sortedWordsDic[i].size() == 1) {
            ananas.push_back(dict[i]);
            continue;
        }
        else if(notAnanas[i]) continue;
        isAnana = true;
        for (int j = i + 1; j < sortedWordsDic.size(); ++j) {
            if(notAnanas[j]) continue;
            else if (sortedWordsDic[i] == sortedWordsDic[j]) {
                notAnanas[i] = 1;
                notAnanas[j] = 1;
                isAnana = false;
            }
        }
        if(isAnana) ananas.push_back(dict[i]);
    }

    sort(ananas.begin(),ananas.end(),myLexCompare);

    for(auto word:ananas){
        cout << word << "\n";
    }

}