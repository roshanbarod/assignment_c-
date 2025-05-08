// 38.Write a C++ program to find the GCD (Greatest Common Divisor) of two numbers using a while loop.
#include <iostream>
using namespace std;

int main() {
    int a = 60, b = 48;
    
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    
    cout << "GCD: " << a << endl;
    return 0;
}

/*
Output:
GCD: 12
*/