// 43.Write a C++ program to print the first N even numbers using a for loop.
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    cout << "First " << n << " even numbers: ";
    for(int i = 1; i <= n; i++) {
        cout << 2*i << " ";
    }
    
    return 0;
}

/*
Output:
First 10 even numbers: 2 4 6 8 10 12 14 16 18 20 
*/