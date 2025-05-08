// 52.Write a C++ program to count the number of vowels and consonants in a given string using a for loop.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "Hello World";
    int vowels = 0, consonants = 0;
    
    for(char c : str) {
        if(isalpha(c)) {
            c = tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
    return 0;
}

/*
Output:
Vowels: 3, Consonants: 7
*/