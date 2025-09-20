/*Write a program to read the price of an item in decimal form (like 15.95)
and print the output in paise(like 1595 paise).
simply, write a program to convert rupees into paise*/

#include<stdio.h>
void main(){
    float rupees;
    int price;
    printf("Enter the price of an item in decimal form(in rupees):");
    scanf("%f",&rupees);
    price=(rupees)*100;
    printf("The price of an item is %d paise",price);
    

}