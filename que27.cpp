// Que27:-Write a C++ program to calculate the sum of the first 50 natural numbers using a while loop

#include <iostream>
using namespace std;

int main() {
    int count = 1;      // Initialize counter starting at 1
    int sum = 0;        // Initialize sum to 0
    
    // While loop to iterate from 1 to 50
    while (count <= 50) {
        sum += count;   // Add current number to sum
        count++;        // Increment counter
    }
    
    // Output the result
    cout << "The sum of the first 50 natural numbers is: " << sum << endl;
    
    return 0;
}

// Output:

// After the loop completes, the total sum (1275) is printed