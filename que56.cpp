// 56.Write a C++ program to calculate the sum of the harmonic series up to n terms using a for loop.
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "Transpose matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output:
Transpose matrix:
1 4 7 
2 5 8 
3 6 9 
*/