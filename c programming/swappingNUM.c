#include<stdio.h>
void main()
{
    int a=5,b=10;   //assigning the values to local varibles
    
    printf("before swapping:%d %d\n",a,b);  

    b=b-a;      //coverting the value of a to b
    a=b;        //assigning the new value of b to a
    a=a+b;      //converting the value of b to a

    printf("after swapping:%d %d\n",a,b);
    
}