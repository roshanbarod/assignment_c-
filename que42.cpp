// 42.Write a C++ program to find the smallest number in an array using a for loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 30, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << "Smallest number: " << min << endl;
    return 0;
}

/*
Output:
Smallest number: 5
*/