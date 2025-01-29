#include<stdio.h>
void main()
{
    int a,b;
    int temp;   //declaring a third temporary variable
    printf("enter any two integer values:",a,b);
    scanf("%d %d",&a,&b);

    printf("before swapping:%d %d\n",a,b);

    temp=b;     //assigning the value of b into temporary variable
    b=a;        //assigning the value of a to b
    a=temp;     //assigning the temporary stored value of b to a

    printf("after swapping:%d %d\n",a,b);

}