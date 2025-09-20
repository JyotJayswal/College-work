/*use heron's formula to find area of triangle.
area=root[s(s-a)(s-b)(s-c)], where a,b,c are sides of triangle & s=a+b+c/2*/

#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,s,resultant,area;
    printf("enter the length of side 1:");
    scanf("%f",&a);
    printf("enter the length of side 2:");
    scanf("%f",&b);
    printf("enter the length of side 3:");
    scanf("%f",&c);

    s=(a+b+c)/2;
    resultant=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(resultant);
    printf("The area of triangle is:%f",area);

}