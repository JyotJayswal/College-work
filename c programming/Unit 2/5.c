/*write a program to takes user input the price of 1kg rice & sugar.
display them as follows: ***LIST OF ITEMS***
                          ITEMS     PRICE
                          RICE      Rs.x
                          SUGAR     Rs.y  */

#include<stdio.h>
void main(){
float x,y;
printf("Enter the value of 1kg rice:");
scanf("%f",&x);
printf("Enter the value of 1kg sugar:");
scanf("%f",&y);
    
printf("\n***LIST OF ITEMS***\n");
printf("Item    Price\n");
printf("Rice    Rs.%.3f\n",x);
printf("Sugar   Rs.%.3f\n",y);

}