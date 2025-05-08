// Que-25:-Write a C++ program to demonstrate the use of C-style casting by converting an int to a double.
#include <iostream>
using namespace std;

int main() {
    int integerValue = 42;

    // C-style cast: int to double
    double doubleValue = (double)integerValue;

    cout << "Original int: " << integerValue << endl;
    cout << "After C-style cast to double: " << doubleValue << endl;

    return 0;
}

// Output
// Original int: 42
// After C-style cast to double: 42