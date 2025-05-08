// 54.Write a C++ program to print all prime numbers between two given numbers using a for loop.
#include <iostream>
using namespace std;

int main() {
    int low = 10, high = 50;
    
    cout << "Prime numbers between " << low << " and " << high << ":\n";
    for(int i = low; i <= high; i++) {
        bool isPrime = true;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime && i > 1) cout << i << " ";
    }
    return 0;
}

/*
Output:
Prime numbers between 10 and 50:
11 13 17 19 23 29 31 37 41 43 47 
*/