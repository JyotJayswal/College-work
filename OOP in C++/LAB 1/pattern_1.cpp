/* write a code to print the following pattern.
    *
   * *
  * * * 
 * * * *    */

 #include <iostream>
 using namespace std;
 int main(){
    int n=4;    //n represents the maximum numbers of rows to be printed
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " " ;
        }
        for(int k=0;k<=i;k++){
            cout << "* " ;
        }
    cout << endl ;
    }
    return 0;
 }