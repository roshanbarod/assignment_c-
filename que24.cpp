// Que:24:-Write a C++ program to demonstrate the use of reinterpret_cast to convert an int to a char.

#include <iostream>
using namespace std;

int main() {
    int num = 65; // ASCII value for 'A'

    // Convert int to char* using reinterpret_cast
    char* charPtr = reinterpret_cast<char*>(&num);

    // Print the first byte (assuming little-endian)
    cout << "First byte as char: " << *charPtr << endl; // 'A' (if num = 65)

    // Print all bytes (for demonstration)
    cout << "All bytes: ";
    for (int i = 0; i < sizeof(num); ++i) {
        cout << charPtr[i] << " "; // 'A' + garbage (depends on system)
    }
    cout << endl;

    return 0;
}

// Possible Output (System-Dependent)
// First byte as char: A  
// All bytes: A  NUL  NUL  NUL  // (Little-endian system, 4-byte int)