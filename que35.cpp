// Que35:->35.Write a C++ program to find the largest number in an array using a for loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 30, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Largest number: " << max << endl;
    return 0;
}

/*
Output:
Largest number: 30
*/