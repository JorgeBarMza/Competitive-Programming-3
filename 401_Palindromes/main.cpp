#include <iostream>
#include <algorithm>
using namespace std;

bool mirror(string s){
    string sMirror = s;
    reverse(sMirror.begin(), sMirror.end());
    for (auto &c:sMirror){
        if(c=='A') continue;
        else if(c=='E') c = '3';
        else if(c=='H') continue;
        else if(c=='I') continue;
        else if(c=='J') c = 'L';
        else if(c=='L') c = 'J';
        else if(c=='M') continue;
        else if(c=='O') continue;
        else if(c=='S') c = '2';
        else if(c=='T') continue;
        else if(c=='U') continue;
        else if(c=='V') continue;
        else if(c=='W') continue;
        else if(c=='X') continue;
        else if(c=='Y') continue;
        else if(c=='Z') c = '5';
        else if(c=='1') continue;
        else if(c=='2') c = 'S';
        else if(c=='3') c = 'E';
        else if(c=='5') c = 'Z';
        else if(c=='8') continue;
        else return false;
    }
    return (s == sMirror);
}
bool palindrome(string s){
    string fHalf = s.substr(0,s.length()/2);
    string sHalf = s.substr(s.length()/2);
    if(s.length() % 2 != 0) sHalf = sHalf.substr(1);
    reverse(sHalf.begin(), sHalf.end());
    return (fHalf == sHalf);
}
int main() {
    string s;
    bool pal, mirr;
    while (cin >> s){
        mirr = mirror(s);
        pal = palindrome(s);
        if(mirr && pal) cout << s << " -- is a mirrored palindrome.\n\n";
        else if(mirr) cout << s << " -- is a mirrored string.\n\n";
        else if(pal) cout << s << " -- is a regular palindrome.\n\n";
        else cout << s << " -- is not a palindrome.\n\n";
    }
}