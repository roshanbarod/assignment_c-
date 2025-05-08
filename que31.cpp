// Que:31:-.Write a C++ program to check if a given number is a prime number using a for loop.
#include <iostream>
using namespace std;

int main() {
    int n = 17;
    bool isPrime = true;
    
    if(n <= 1) isPrime = false;
    else {
        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    cout << n << (isPrime ? " is prime" : " is not prime") << endl;
    return 0;
}

// Output:

// 17 is prime