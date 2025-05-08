// 64.Write a C++ program to convert a decimal number to a binary number using a while loop.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int decimal = 10;
    string binary;
    
    while(decimal != 0) {
        binary += to_string(decimal % 2);
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    
    cout << "Binary equivalent: " << binary << endl;
    return 0;
}

/*
Output:
Binary equivalent: 1010
*/