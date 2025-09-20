/*find a factorial of a number by taking the number input from user.*/

#include<iostream>
using namespace std;
int main(){
    int num,result=1;
   cout << "Enter any integer to find its factorial:";
   cin >> num;

   if(num==0){
    result=1;
   }
   else{
    for(int i=1;i<=num;i++){
    result=result*i;
    }
   }
   cout << "the factorial of " << num << " is " <<result ;
return 0;
}


/*There is a limitation of this program that it finds the factorial correct
only upto 12 because we use the int data type whose range is upto certain limit.
then what should we do to increase our range of data type?*/