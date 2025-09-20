/*write a program to display the simple arithmetic calculator.
take 2 integers as an input from user (addition,subtraction,multiply,division.)*/

#include<stdio.h>
void main(){
float x,y;
float add,sub,mul,div;
printf("Enter any two numbers:");
scanf("%f %f",&x,&y);
add=x+y;
sub=x-y;
mul=x*y;
div=x/y;
printf("addition of two integers is:%.2f\n",add);
printf("subtraction of two integers is:%.2f\n",sub);
printf("multiplication of two integers is:%.2f\n",mul);
printf("division of two integers is:%.2f",div);

}