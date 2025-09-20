/*write a program to convert fahrenheit to degree and vice versa.*/

#include<stdio.h>
void main(){
    float temp,degree,fahrenheit;
    printf("Enter the temperature:");
    scanf("%f",&temp);
    fahrenheit=(1.8*temp)+32;
    degree=(0.5556)*(temp-32);
    printf("Temperature in fahrenheit is:%.2f\n",fahrenheit);
    printf("Temperature in degree is:%.2f",degree);
}