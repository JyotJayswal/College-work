/*write a program to compute the values of square-roots & squares of the numbers
0 to 100 in steps 10 & print the output in a tabular form.*/

#include<stdio.h>
#include<math.h>
void main(){
int num=0;
float square,root;
printf("------------------------------------------\n");
printf("|  Number  |   Square-root   |   Square  |\n");
printf("------------------------------------------\n");
while(num<=100){
    square=num*num;
    root=sqrt(num);
    printf("|%9d | %15.2f | %9.2f |\n",num,root,square);
    num=num+10;
    }
printf("------------------------------------------");
}