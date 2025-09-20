/*write a program to calculate the total distance travelled by vehicle using formula:
    distance=ut+(at^2)/2
take input from user of t=time interval,u=initial velocity,a=acceleration.*/

#include<stdio.h>
void main(){
int key;
float distance,u,time,a;
printf("Enter the value of time interval:");
scanf("%f",&time);

again:
printf("\nEnter the value of Initial Velocity:");
scanf("%f",&u);
printf("Enter the value of acceleration:");
scanf("%f",&a);

distance=(u*time)+(a*time*time)/2;
printf("The distance is:%.2f",distance);

printf("\nIf you want to calculate for different values of u & a press 1 otherwise any number:");
scanf("%d",&key);
if(key==1){
    goto again;
}
else{
    goto end;
}
end:
printf("\nPROGRAM ENDS");
}