#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

 class Date{
 public:
    int day;
    int month;
    int year;
    Date(int d,int m,int y){
       day = d;
       month = m;
       year = y;
    }
    void print(){
        cout << day << "/" << month << "/" << year << "\n";
    }
 };

 bool descendingDay(Date a, Date b){
     return a.day < b.day;
 }


 bool descendingMonth(Date a, Date b){
     return a.month < b.month;
 }
 
 bool descendingYear(Date a, Date b){
     return a.year < b.year;
 }
 
 
 int main(){
    vector<Date> dates;
    dates.push_back(Date(01,01,2000));
    dates.push_back(Date(01,03,2000));
    dates.push_back(Date(01,01,2001));
    sort(dates.begin(), dates.end(), descendingDay);
    sort(dates.begin(), dates.end(), descendingMonth);
    sort(dates.begin(), dates.end(), descendingYear);


    while(!dates.empty()){
        dates.back().print();
        dates.pop_back();
    }
}
