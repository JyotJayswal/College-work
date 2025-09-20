/*Take 3 inputs from keyboard & 
print out the largest of them without using if statement.*/

#include<stdio.h>
void main(){
int num1,num2,num3,max;
printf("Enter the value of num 1:");
scanf("%d",&num1);
printf("Enter the value of num 2:");
scanf("%d",&num2);
printf("Enter the value of num 3:");
scanf("%d",&num3);
max=(num1>num2) ? ((num1>num3) ? num1:num3) : (num2>num3 ? num2:num3);
printf("%d is the largest number.",max);
}

// I use the conditional operator in a nested way instead of if statement.