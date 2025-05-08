// Que23:-.Write a C++ program to demonstrate the use of const_cast by modifying a constant variable.

#include <iostream>
using namespace std;

// Function that takes a non-const reference
void modifyValue(int& value) {
    value *= 2; // Doubles the value
}

int main() {
    // Case 1: Original variable is NOT const (safe to modify)
    int x = 5;
    const int& constRef = x; // Const reference to a non-const variable

    cout << "Original x: " << x << endl;

    // Remove const and modify
    int& mutableRef = const_cast<int&>(constRef);
    modifyValue(mutableRef);

    cout << "After modification: " << x << endl; // x is now 10

    // Case 2: Original variable IS const (undefined behavior!)
    const int y = 20;
    cout << "\nOriginal y: " << y << endl;

    // Attempting to modify a truly const variable (DANGEROUS!)
    int& badRef = const_cast<int&>(y);
    badRef = 100; // Undefined behavior (may crash or give wrong results)

    cout << "After illegal modification: " << y << endl; // May still print 20!

    return 0;
}

// Output (Compiler-Dependent)
// Original x: 5
// After modification: 10

// Original y: 20
// After illegal modification: 20  // Undefined behavior!