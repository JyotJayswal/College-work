/*given the values of x,y,z. write a program such that the value of x=value of y,
value of y=value of z & value of z=value of x. */

#include<stdio.h>
void main(){
int x,y,z,temp;
printf("Enter the value of x:");
scanf("%d",&x);
printf("\nEnter the value of y:");
scanf("%d",&y);
printf("\nEnter the value of z:");
scanf("%d",&z);
temp=x;
x=y;    
y=z;
z=temp;
//after assigning the value of y to x the original value got changed.therefore,store the original value of x in a temp variable
printf("\nAfter interchanging the value:\n");
printf("value of x:%d\n",x);
printf("value of y:%d\n",y);
printf("value of z:%d\n",z);

}