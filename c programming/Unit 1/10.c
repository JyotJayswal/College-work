/*write a program to find distance b/w 2 points using distance formula
D^2=(x1-x2)^2 + (y1-y2)^2 */

#include<stdio.h>
#include<math.h>
void main(){
int x1,x2,y1,y2;
float result,distance;
printf("Enter the coordinates of 1st point:");
scanf("%d %d",&x1,&y1);
printf("(x1,y1)=(%d,%d)",x1,y1);

printf("\nEnter the coordinates of 2nd point:");
scanf("%d %d",&x2,&y2);
printf("(x2,y2)=(%d,%d)",x2,y2);

result=pow(x1-x2,2)+pow(y1-y2,2);
distance=sqrt(result);

printf("\nThe diatance between two points is:%.2f units",distance);

}