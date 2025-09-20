/*Write a program which reads 3 values and print the following result:
1) sum of the values
2)average of the three values
3)largest of the three
4)smallest of the three*/

#include<stdio.h>
void main(){
int num1,num2,num3,sum;
float average;
printf("Enter the value of num 1:");
scanf("%d",&num1);
printf("Enter the value of num 2:");
scanf("%d",&num2);
printf("Enter the value of num 3:");
scanf("%d",&num3);
sum=num1+num2+num3;
average=sum/3;
printf("The sum of 3 numbers is:%d",sum);
printf("\nThe average of 3 numbers is:%.2f\n",average);

//for largest
if(num1>num2){
    if(num1>num3){
        printf("%d is the largest number.\n",num1);
    }
    else{
        printf("%d is the largest number.\n",num3);
        }
    }
else{
    if(num2>num3){
        printf("%d is the largest number.\n",num2);
    }
    else{
        printf("%d is the largest number.\n",num3);
        }
    }
//for smallest
if(num1<num2){
    if(num1<num3){
        printf("%d is the smallest number.\n",num1);
    }
    else{
        printf("%d is the smallest number.\n",num3);
    }
}
else{
    if(num2<num3){
        printf("%d is the smallest number.\n",num2);
    }
    else{
        printf("%d is the smallest number.\n",num3);
    }
}
}

