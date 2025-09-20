/*write a program that determines whether a given integer is odd or even & displays
the number & description on the same line.*/

#include<stdio.h>
void main(){
int num;
printf("Enter any integer number:");
scanf("%d",&num);
if(num%2==0){
    printf("The given number is even.");
}
else{
    printf("The number is odd.");
}


}