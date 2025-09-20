/*write a program to find the number of and sum of all integers greater than 100 &
less than 200 that are divisible by 7.*/

#include<stdio.h>
void main(){
int num=100,sum=0;
while(num<=200){
    if(num%7==0){
        printf("%d ",num);
        sum=sum+num;    //storing the num as a resultant sum
    }
    num++;  //increasing the number by 1
}
printf("\nThe sum of all integers which are divisible by 7 is:%d",sum);

}