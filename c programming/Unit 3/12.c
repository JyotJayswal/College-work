/*write a program which takes 2 int values m & n and
to decide and print whether m is a multiple of n.*/

#include<stdio.h>
void main(){
int m,n;
printf("Enter the two integer values:\n");
scanf("%d\n%d",&m,&n);
if(n%m==0){
    printf("%d is a multiple of %d",m,n);
}
else{
    printf("%d is not a multiple of %d",m,n);
}
}