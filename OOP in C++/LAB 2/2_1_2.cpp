/*write a program to obtain the fibonacci series upto the number of term inserted 
by the user.*/

#include<iostream>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int a=0,b=1,c,term;
    cout << "Enter the number of term upto which fibonacci series should be printed:";
    cin >> term;
    cout << endl << "The fibonacci series upto " << term << " terms:" << endl;
    cout << a << " " << b << " " ; 
    for(int i=2;i<=term;i++){
        c=a+b;
        cout << c <<" " ;
        a=b;
        b=c;
    }

    return 0;
}