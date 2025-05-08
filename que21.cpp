// Que:-21.Write a C++ program to demonstrate the use of static_cast by converting an int to a double and vice versa.

#include <iostream>
using namespace std;

int main() {
    // 1. Convert int to double (no data loss)
    int integerNum = 42;
    double doubleNum = static_cast<double>(integerNum);
    cout << "int to double: " << integerNum << " → " << doubleNum << endl;

    // 2. Convert double to int (truncates decimal part)
    double floatingNum = 3.14159;
    int truncatedInt = static_cast<int>(floatingNum);
    cout << "double to int: " << floatingNum << " → " << truncatedInt << endl;

    return 0;
}

// Output
// int to double: 42 → 42  
// double to int: 3.14159 → 3 