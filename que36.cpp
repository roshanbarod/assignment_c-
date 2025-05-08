// 36.Write a C++ program to print the elements of an array in reverse order using a for loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Array in reverse: ";
    for(int i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

/*
Output:
Array in reverse: 5 4 3 2 1 
*/