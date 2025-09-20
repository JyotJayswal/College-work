/*Write a program in C to perform swapping of two numbers 
by passing addresses of the variables to the functions.*/

#include<stdio.h>

void main(){
    int num1=5, num2=10, temp;

    printf("Numbers before swapping:\n");
    printf("num 1: %d & num 2: %d",num1,num2);
    int *ptr1 = &num1;  //pointer variable of type int storing the address of num1
    int *ptr2 = &num2;  //pointer variable of type int storing the address of num2

    temp = *ptr1;  //storing the num1 in a temporary variable by dereferencing the ptr1(passing the num1 into temp by using pointer concept)
    num1 = *ptr2;  //storing the num2 in num1 by dereferencing the ptr2(passing the num1 into temp by using pointer concept)
    num2 = temp;   //storing the temp in num2
    
    printf("\nNumbers after swapping:\n");
    printf("num 1: %d & num 2: %d",num1,num2);

}