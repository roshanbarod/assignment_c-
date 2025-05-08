// 47.Write a C++ program to reverse a given string using a for loop.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    string reversed;
    
    for(int i = str.length()-1; i >= 0; i--) {
        reversed += str[i];
    }
    
    cout << "Reversed string: " << reversed << endl;
    return 0;
}

/*
Output:
Reversed string: olleH
*/