#include <iostream>
using namespace std;

bool isPowerOf2(int a){
    return !(a & (a-1));
}

int turnOffLastBit(int a){
    return a & (a-1);
}

int turnOnLastZero(int a){
    return a | (a+1);
}
int turnOffLastConsecutiveOnes(int a){
    return a & a+1;
}
int turnOnLastConsecutiveZeros(int a) {
    return a | a - 1;
}

int main() {
    cout <<turnOnLastConsecutiveZeros(36) << " " ;
}
