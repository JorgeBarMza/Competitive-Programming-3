#include <iostream>
#include <vector>

using namespace std;

int cycle, zeros, sec, rounds, minCycle = 91;
bool allGreen, finish;
string hmsTime;
vector<int> cycles;

string secsToHMS(int sec){
    int h,m,s;
    s = sec;
    m = s/60;
    s = s%60;

    h = m/60;
    m = m%60;


    string fH = (h>9)? to_string(h):"0"+to_string(h);
    string fM = (m>9)? to_string(m):"0"+to_string(m);
    string fS = (s>9)? to_string(s):"0"+to_string(s);

    return fH + ":" + fM + ":" + fS;
}

//int main() {
//
//   while(cin >> cycle){
//
//       if(cycle == 0) {
//           if(++zeros > 2) break;
//           else{
//               if(cycles.empty()) break;
//               finish = false;
//               zeros = 0;
//               sec = 0;
//               rounds = 1;
//               allGreen = true;
//               while(true){
//                   for(auto oc:cycles){
//                       sec = oc*rounds;
//                       for(auto c:cycles){
//                           if(sec/c %2 == 0 && sec % c < c-5){
//                               continue;
//                           }
//                           else{
//                               allGreen = false;
//                               break;
//                           }
//                       }
//                       if(allGreen){
//                           if(sec > 18000) cout << "Signals fail to synchronise in 5 hours\n";
//                           else{
//                               hmsTime = secsToHMS(sec);
//                               cout << hmsTime << "\n";
//                           }
//                           finish = true;
//                           break;
//                       }
//                       allGreen = true;
//                   }
//                   rounds++;
//                   if(finish) break;
//               }
//               cycles.clear();
//           }
//       }else {
//           zeros = 0;
//           cycles.push_back(cycle);
//       }
//
//
//   }
//}

int main() {
    while(cin >> cycle){
        if(cycle == 0) {
            if(++zeros > 2) break;
            else{
                if(cycles.empty()) break;
                zeros = 0;
                sec = (2*minCycle)-1;
                allGreen = true;
                while(true){
                    sec++;
                    for(auto c:cycles){
                        if(sec % (2*c) < (c-5)) continue;
                        else{
                        allGreen = false;
                        break;
                        }
                    }
                    if(allGreen || sec > 18000){
                        if(sec > 18000) cout << "Signals fail to synchronise in 5 hours\n";
                        else{
                            hmsTime = secsToHMS(sec);
                            cout << hmsTime << "\n";
                        }
                        break;
                    }
                    allGreen = true;
                }
                cycles.clear();
                minCycle = 91;
            }
        }else {
            zeros = 0;
            cycles.push_back(cycle);
            if(cycle < minCycle) minCycle = cycle;
        }


    }
}