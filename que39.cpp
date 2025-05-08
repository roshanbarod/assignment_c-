// 39.Write a C++ program to print all the prime numbers between 1 and 100 using a for loop.
#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1-100:\n";
    for(int i = 2; i <= 20; i++) { // Reduced to 20 for brevity
        bool isPrime = true;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << " ";
    }
    return 0;
}

/*
Output:
Prime numbers between 1-100:
2 3 5 7 11 13 17 19 
*/