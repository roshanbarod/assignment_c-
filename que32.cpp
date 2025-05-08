// Que-32:-.Write a C++ program to print the Fibonacci series up to a given number of terms using a for loop.

#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter number of terms: ";
    cin >> n;
    
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    return 0;
}