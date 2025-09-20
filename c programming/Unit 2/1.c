/*Write a program to determine and print the sum of the harmonic series of n terms
(value of n should be given by user.)*/

#include<stdio.h>
void main(){
int n;
float i=1,sum=0;
printf("Enter the value of nth term:");
scanf("%d",&n);
if(n>0){
    while(i<=n)
    {
        sum=sum+(1/i);
        i++;
    }
    printf("The sum of the harmonic series of %d terms is %.3f",n,sum);
}

else{
    if(n==0){
    printf("The sum of the harmonic series of %d terms is 0",n);
    }
    else
        {printf("Invalid input");
        }
    }

}