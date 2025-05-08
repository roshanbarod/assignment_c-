// 57.Write a C++ program to find duplicate elements in an array using nested for loops.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Duplicate elements: ";
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}

/*
Output:
Duplicate elements: 2 4 
*/