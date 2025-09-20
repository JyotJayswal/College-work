/*take a integer number from user,write a program that displays the number as follows:
eg: number=5678
first line  :   5678
second line :   567
third line  :   56
fourth line :   5*/

#include<stdio.h>
void main(){
int num;
printf("Enter any integer value:");
scanf("%d",&num);
while(num>=1){
    printf("%d\n",num);
    num=num/10; // operator / gives the only quotient value
}
}