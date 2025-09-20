/*write a program to defines the collatz conjuction. take input from user.
definition:if num is even divide it by 2 or if num is odd multiply it with 3 & add 1 to it.
repeat this until you get the num==1.*/

#include<iostream>
using namespace std;
int main(){
    int num,result[200],count=0; 
    cout << "Enter any integer number:" ;   
    cin >> num;
    while(num!=1){

        cout << num << " " ;
        
        if(num%2==0){
            num=num/2;
        }
        else{
            num=(num*3)+1;
        }
    }
    cout << "1" << endl;

return 0;
}