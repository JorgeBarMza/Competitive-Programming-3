//
//  main.cpp
//  10114_LoansomeCarBuyer
//
//  Created by Jorge Barrios on 5/18/17.
//  Copyright © 2017 Jorge Barrios. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int months, deprecations, curMonth;
    double payment, loan, carValue, curDeprecation = 0, monthlyFee;
    vector<double> monthlyDeprecations (105,0);
    
    while (true) {
        cin >> months >> payment >> loan >> deprecations;
        
        if(months < 0) break;

        for (int i = 0; i<deprecations; i++) {
            cin >> curMonth >> monthlyDeprecations[curMonth];
        }
        
        curMonth = 0;
        
        monthlyFee = loan/months;
        
        carValue = (payment + loan) ;
        carValue -= carValue*monthlyDeprecations[curMonth++];
        
        
        while (carValue < loan) {
            loan -= monthlyFee;
            if(monthlyDeprecations[curMonth]) curDeprecation = monthlyDeprecations[curMonth];
            carValue -= carValue * curDeprecation;
            curMonth++;
        }
        
        if(curMonth == 0) cout << "0 months\n";
        if (curMonth == 2) cout << "1 month\n";
        else cout << curMonth-1 << " months\n";
        
        monthlyDeprecations.assign(105, 0);
    }

}
