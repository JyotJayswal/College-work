/*write a program which takes 2 float numbers from user and divide 1st num by 2nd num
and display the result along with numbers.*/

#include<stdio.h>
void main(){
float a,b,result;
printf("Enter the 1st float number:");
scanf("%f",&a);
printf("Enter the 2nd float number:");
scanf("%f",&b);
result=a/b;
printf("The result of %f / %f is:%.3f",a,b,result);

}
