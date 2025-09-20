/*write a program to obtain perimeter and area of the rectangle.
get input of length and breadth from user.*/

#include<stdio.h>
void main(){
float length,breadth,peri,area;
printf("Enter the length of the rectangle:");
scanf("%f",&length);
printf("Enter the breadth of the rectangle:");
scanf("%f",&breadth);
peri=2*(length+breadth);
area=(length*breadth);
printf("\nperimeter of rectangle is:%.3f\n",peri);
printf("area of rectangle is:%.3f",area);
}