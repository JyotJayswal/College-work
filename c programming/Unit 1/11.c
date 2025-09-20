/*A circle has centre (0,0) & a point (4,5) on its circumference.
write a program to find its perimeter & area*/

#include<stdio.h>
#include<math.h>
#define pi 3.14159
void main(){
int x1=0,y1=0,x2=4,y2=5;
float distance,radius,area,circumference;
distance=pow(x1-x2,2)+pow(y1-y2,2);//radius = distance from centre to a point on circle
radius=sqrt(distance);
circumference=2*pi*radius;
area=pi*pow(radius,2);
printf("Circumference of circle is:%.2f units\n",circumference);
printf("area of circle is:%.2f units",area);
}