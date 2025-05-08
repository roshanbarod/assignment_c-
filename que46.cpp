// 46.Write a C++ program to calculate the sum of digits of a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num = 12345, sum = 0;
    
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}

/*
Output:
Sum of digits: 15
*/