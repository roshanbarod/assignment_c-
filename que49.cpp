// 49.Write a C++ program to find the sum of all elements in an array using a for loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

/*
Output:
Sum of array elements: 15
*/