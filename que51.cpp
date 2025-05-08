// 51.Write a C++ program to find the sum of all even and odd numbers between 1 and 100 using separate for loops.
#include <iostream>
using namespace std;

int main() {
    int evenSum = 0, oddSum = 0;
    
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) evenSum += i;
        else oddSum += i;
    }
    
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;
    return 0;
}

/*
Output:
Sum of even numbers: 2550
Sum of odd numbers: 2500
*/