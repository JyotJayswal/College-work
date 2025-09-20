/*write a program to print a table of sin & cos functions for the interval from
0 to 180 degrees in increments of 15 & print the output in a tabular form.*/

#include<stdio.h>
#include<math.h>
#define PI 3.1416
void main(){
int degree=0;
float x,sine,cosine;
printf("------------------------------------------\n");
printf("|    x(degrees)  |   sin(x)  |   cos(x)  |\n");
printf("------------------------------------------\n");
while(degree<=180){
    x=(PI/180)*degree;  //convert degrees into radians(reason: in sin(x) fun the value of x is in radian only)
    sine=sin(x);
    cosine=cos(x);
    printf("|%12d    | %8.2f  | %8.2f  |\n",degree,sine,cosine);
    degree=degree+15;
    }
printf("------------------------------------------");
}

