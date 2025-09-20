/*write a program that read a real number from the user & 
print the following output in one line.
(smallest int not less than the num)  the given number  (largest int not greater than the num)*/

#include <stdio.h>
int getfloor(float num){
    int intpart=(int)num;
    if(intpart>0 || intpart==num){
        return intpart;}
    else{
        return intpart-1;}
}
int getceil(float num){
    int intpart=(int)num;
    if(intpart<0 || intpart==num){
        return intpart;}
    else{
        return intpart+1;}
}
void main(){
float num;
printf("Enter any floating number:");
scanf("%f",&num);
printf("greatest integer less than or equal to number:%d\n",getfloor(num));
printf("smallest integer greater than or equal to number:%d",getceil(num));

}



/* same program using the math library & built-in functions

#include<stdio.h>
#include<math.h>    
void main(){
int greatest,smallest;
float num;
printf("Enter any floating number:");
scanf("%f",&num);
greatest=floor(num);    // use built-in functions
smallest=ceil(num);
printf("Greatest integer & less than or equal to number:%d\n",greatest);    
printf("smallest integer & greater than or equal to number:%d",smallest);    
}*/