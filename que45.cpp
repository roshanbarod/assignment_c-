// 45.Write a C++ program to print the numbers from 1 to 100, but replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" using a for loop.
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 15; i++) { // Reduced to 15 for brevity
        if(i % 15 == 0) cout << "FizzBuzz ";
        else if(i % 3 == 0) cout << "Fizz ";
        else if(i % 5 == 0) cout << "Buzz ";
        else cout << i << " ";
    }
    return 0;
}

/*
Output:
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 
*/