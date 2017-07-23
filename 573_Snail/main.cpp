#include <iostream>
using namespace std;
int main() {
    double h, u, d, f, curHeight, heightAfterClimb, distClimbed, heightAfterSlide, fatigueConstant;
    int day;
    string outcome;
    bool first;
    cin >> h;
    while(h > 0 ){
        cin >> u >> d >> f; // H is the height of the well in feet, U is the distance in feet that the snail can climb during the day, D is the distance in feet that the snail slides down duringthe night, and F is the fatigue factor expressed as a percentage.
        curHeight = 0;
        distClimbed = u;
        day = 1;
        fatigueConstant = f*u/100;
        first = true;
        while(true) {
            if(!first) {
                distClimbed -= fatigueConstant;
                if(distClimbed < 0)distClimbed = 0;

            }
            curHeight += distClimbed;
            if (curHeight > h) {
                outcome = "success";
                break;
            }
            curHeight -= d;
            if (curHeight < 0) {
                    outcome = "failure";
                    break;
                }
            first = false;
            day++;
        }
        cout << outcome << " on day " << day << "\n";
        cin >> h;
    }
}