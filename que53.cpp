// 53.Write a C++ program to convert a binary number to a decimal number using a while loop.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary = 1010, decimal = 0, i = 0;
    
    while(binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }
    
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}

/*
Output:
Decimal equivalent: 10
*/