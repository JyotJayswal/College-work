/*cost of one type of mobile service is Rs.250 plus 
Rs.1.25 for each call made over & above 100 calls.
write a program to read customer codes & calls made and print the bill for each customer. */

#include<stdio.h>
#define service_cost 250
void main(){
int code,call;
float bill;
printf("Enter the code no. of customer:");  //identity of customer eg:15684
scanf("%d",&code);
printf("Enter the no. of calls made:");
scanf("%d",&call);
if(call>100){
    bill=service_cost+(1.25*call);
}
else{
    bill=service_cost+1.25;
}
printf("bill of %d customer is: %.3f",code,bill);

}
