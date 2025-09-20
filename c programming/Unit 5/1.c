/*Write a program to determine that the number is odd or even and print the message:
NUMBER IS ODD or NUMBER IS EVEN
a)without using else option
b)with else option*/

#include<stdio.h>
void main(){
int num;
printf("Enter any integer number:");
scanf("%d",&num);
(num%2==0)? printf("NUMBER IS EVEN.") : printf("NUMBER IS ODD.") ;  //use conditional operator

}

/*  b) with else option
if(num%2==0){
    printf("NUMBER IS EVEN");
}
else{
    printf("NUMBER IS ODD");
*/