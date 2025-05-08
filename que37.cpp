// 37.Write a C++ program to calculate the average of numbers in an array using a for loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    float sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    cout << "Average: " << sum/size << endl;
    return 0;
}

/*
Output:
Average: 30
*/