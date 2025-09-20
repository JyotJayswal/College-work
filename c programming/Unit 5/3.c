/*a set of 2 linear equation with 2 unknowns is given below:
a(x1)+b(x2)=m   where, x1=md-bn/ad-cb and x2=na-bc/ad-cb 
c(x1)+d(x2)=n           provided that denominator should not be zero
write a program that read the values of a,b,c,d,m,n & compute the value of x1,x2.
also an appropriate message should be printed if ad-bc is zero.*/

#include<stdio.h>
void main(){
int a,b,c,d,m,n;
float x1,x2,deno;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the value of c:");
scanf("%d",&c);
printf("Enter the value of d:");
scanf("%d",&d);
printf("Enter the value of m:");
scanf("%d",&m);
printf("Enter the value of n:");
scanf("%d",&n);
deno=(a*d-c*b);
x1=(m*d-b*n)/deno;
x2=(n*a-b*c)/deno;
if(deno!=0){
    printf("the value of x1= %.3f\n",x1);
    printf("the value of x2= %.3f",x2);
    }
else{
    printf("'ERROR' The denominator is zero.");
}
}