// Que:-29:.Write a C++ program to find the factorial of a given number using a for loop.

#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}