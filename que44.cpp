// 44.Write a C++ program to print a pattern using nested for loops.
#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

/*
Output:
    *
   ***
  *****
 *******
*********
*/