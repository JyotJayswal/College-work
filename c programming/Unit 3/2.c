/*write a program that reads a floating-point number & 
then displays the right-most digit of the integral part of the number.*/

#include<stdio.h>
void main(){
int result,remainder;
float num;
printf("Enter any floating-point number:");
scanf("%f",&num);
result=(int)num;    //type cast input num into integer
remainder=(int)result%10; //use modulo operator to access the unit-place digit
printf("\nthe integer part is:%d",result);
printf("\nthe right most number of integer part is:%d",remainder);

//when you divide any num with 10 and obtain the remainder you get the unit-place digit
//similarly if you divide any int number by 100 you get tens-place digit 
}
