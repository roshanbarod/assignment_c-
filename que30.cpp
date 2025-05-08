// Que:30:-Write a C++ program to reverse a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num = 1234, reversed = 0;
    
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
// Output:

// Reversed number: 4321