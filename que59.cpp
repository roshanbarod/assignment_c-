// 59.Write a C++ program to find the LCM (Least Common Multiple) of two numbers using a while loop.
#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 18, lcm;
    int max = (a > b) ? a : b;
    
    while(true) {
        if(max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    
    cout << "LCM of " << a << " and " << b << ": " << lcm << endl;
    return 0;
}

/*
Output:
LCM of 12 and 18: 36
*/