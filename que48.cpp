// 48.Write a C++ program to check if a given number is an Armstrong number using a while loop.#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 153, original = num, sum = 0, digits = 0;
    
    while(original != 0) {
        digits++;
        original /= 10;
    }
    
    original = num;
    while(original != 0) {
        sum += pow(original % 10, digits);
        original /= 10;
    }
    
    cout << num << (sum == num ? " is Armstrong" : " is not Armstrong") << endl;
    return 0;
}

/*
Output:
153 is Armstrong
*/