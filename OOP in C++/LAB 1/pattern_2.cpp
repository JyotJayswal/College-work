/* write a code to print the following pattern.
    *
    * *
    * * *
    * * * * 
    * * *
    * *
    *   */

#include<iostream>
using namespace std;
int main(){
    int n=4;    //n represents the maximum numbers of rows to be printed
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;   
    }
return 0;
}