/*write a program to obtain the multiplication matrix of order nxn.
take user input. */

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of the matrices (n x n): ";
    cin >> n;

    int mat1[100][100], mat2[100][100], product[100][100];

    // Input for first matrix
    cout << "Enter elements of the first matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "mat1[" << i << "][" << j << "] = ";
            cin >> mat1[i][j];
        }
    }

    // Input for second matrix
    cout << "Enter elements of the second matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "mat2[" << i << "][" << j << "] = ";
            cin >> mat2[i][j];
        }
    }

    // Initialize product matrix with 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(int i = 0; i < n; i++) {             // row of mat1
        for(int j = 0; j < n; j++) {         // column of mat2
            for(int k = 0; k < n; k++) {     // column of mat1 / row of mat2
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display result
    cout << "\nProduct of the two matrices is:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


















