/*write a program to count & print the number of -ve & +ve numbers in a given set of num.
reading should be terminated when the value 0 is encountered.
use scanf to read numbers and test your program with a suitable set of numbers. */

#include<stdio.h>
void main(){
int num,positive_count=0,negative_count=0;
printf("Enter a number(0 to stop):");

while(1){   //while(1) denotes that the loop is always true until we don't terminated it or any break statement is not encountered 
    scanf("%d",&num);
    if(num==0){
        break;
    }
    else{
        if(num>0){
        positive_count++;
        }                           //nested if...else statements
        else{
        negative_count++;
        }
    }
        }
printf("There are %d positive numbers.\n",positive_count);
printf("There are %d negative numbers.",negative_count);
}