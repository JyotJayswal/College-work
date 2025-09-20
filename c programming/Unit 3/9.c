/*Write a program to read a 4 digit integer & print the sum of its digits.*/
/*1234 sum =10 ; 9123 sum=15 */
#include<stdio.h>
void main(){
int num,sum=0;
printf("Enter a 4 digit integer number:");
scanf("%d",&num);
while(num>=1){      //when the num is divided with 10 with smaller numerator the quotient is always less than 1.
    sum=sum+num%10; //the last digit is stored and count in sum
    num=num/10;     //num is updated by removing its last digit
}
printf("The sum of 4 digits is:%d",sum);

}