/*write a program that prints even numbers b/w 1 to 100.*/

#include<stdio.h>
void main(){
int i=1;
printf("The even numbers between 1 to 100 are:\n");
while(i<=100){
    if(i%2==0){
        printf("%d ",i);
    }
    i++;
}

}
