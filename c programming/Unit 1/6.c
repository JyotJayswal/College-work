/*given 2 integers 20 & 10, write a program that uses a function add() to add these two numbers
and sub() to find difference of these two numbers and display them in the following form.
20+10=30 and 20-10=10*/

#include<stdio.h>
int a=20,b=10;  //global declaration of variables

//function defination
void add(int a,int b){
    int c;
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);  
}
void sub(int a,int b){
    int d;
    d=a-b;
    printf("%d-%d=%d\n",a,b,d);
}

void main(){
    add(a,b);   //function calling
    sub(a,b);
}


