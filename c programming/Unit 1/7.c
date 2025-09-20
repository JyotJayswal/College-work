/*values of a,b,c variables are given, write a program to compute and display x=a/(b-c) 
i) a=250 b=85 c=25
ii)a=300 b=70 c=70  comment on output of each case*/

#include<stdio.h>
void main(){

int a=250,b=85,c=25;    
float x;
x=a/(b-c);
printf("value of x=%f",x);

}
//for 1st case it compute for the value of x
//but for 2nd case it gives no output(reason: denominator becomes zero)