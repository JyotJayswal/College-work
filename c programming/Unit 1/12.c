/*two points lies on the circumference of circle are given:(2,2) & (5,6).
distance b/w these two points= diameter of circle.
write a program to compute area of cicle*/

#include<stdio.h>
#include<math.h>
#define pi 3.14159
void main(){

int x1=2,y1=2,x2=5,y2=6;
float distance,diameter,radius,area;
distance=pow(x1-x2,2)+(y1-y2,2);
diameter=sqrt(distance);
radius=diameter/2;
area=pi*pow(radius,2);
printf("area of the circle is:%f units",area);

}