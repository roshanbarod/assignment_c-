// Que33:-Write a C++ program to count the number of digits in a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num = 12345, count = 0;
    
    while(num != 0) {
        num /= 10;
        count++;
    }
    
    cout << "Number of digits: " << count << endl;
    return 0;
}

/*
Output:
Number of digits: 5
*/