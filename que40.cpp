// 40.Write a C++ program to find the sum of the digits of a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num = 1234, sum = 0;
    
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}

/*
Output:
Sum of digits: 10
*/