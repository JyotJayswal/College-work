/*write a program to print the addition of 2 matrix of order nxn. take user input.*/

#include<iostream>
using namespace std;
int main(){

    int n,mat1[50][50],mat2[50][50],add[50][50];
    cout << "Enter the order of the matrix (n x n): ";
    cin >> n;   //take input from user of order of matrix 

    cout << endl <<"Enter the elements of first matrix:" << endl ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) {
            // cout << "matrix_1[" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << endl <<"Enter the elements of second matrix:" << endl ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) {
            // cout << "matrix_2[" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            add[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    cout <<endl << "The addition matrix is:" << endl ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << add[i][j] << '\n';
        } 
    }
    return 0;
}