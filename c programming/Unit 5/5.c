/*write a program to process the applications to list the eligible candidates.
admission to professional course is subject to the following conditions:
a)marks in mathematics>=60
b)marks in physics>=50
c)marks in chemistry>=40
d)total in all three subjects>=200
    OR
total in mathematics and physics>=150*/

#include<stdio.h>
void main(){
float maths,chem,phy,total;
printf("Enter the marks of mathematics:");
scanf("%f",&maths);
printf("Enter the marks of physics:");
scanf("%f",&phy);
printf("Enter the marks of chemistry:");
scanf("%f",&chem);
total=maths+phy+chem;
printf("The total marks of all three sujects are:%.3f",total);
if(maths>=60 && phy>=50 && chem>=40 && total>=200 || maths+phy>=150){
    printf("\nthe candidate is eligible.");
    }
else{
    printf("\nthe candidate is not eligible.");
}
}