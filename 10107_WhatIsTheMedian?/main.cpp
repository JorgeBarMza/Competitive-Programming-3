#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long num;
vector<int> nums;
int size, midIndex, midLowIndex, midHighIndex;

int main() {
    size = 0;

    while(cin >> num){
        nums.push_back(num);
        size++;
        midIndex = size/2;
        if(size % 2 == 0){
            nth_element(nums.begin(), nums.begin()+midIndex, nums.end());
            midHighIndex = nums[midIndex];
            nth_element(nums.begin(), nums.begin()+midIndex-1, nums.end());
            midLowIndex = nums[midIndex-1];
            cout << (midLowIndex+midHighIndex)/2 << "\n";
        }
        else{
            nth_element(nums.begin(), nums.begin()+midIndex, nums.end());
            cout << nums[midIndex] << "\n";
        }
    }
}