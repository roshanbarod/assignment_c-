// 41.Write a C++ program to check if a given number is a palindrome using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num = 1221, original = num, reversed = 0;
    
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    cout << original << (original == reversed ? " is palindrome" : " is not palindrome") << endl;
    return 0;
}

/*
Output:
1221 is palindrome
*/