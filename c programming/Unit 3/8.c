/*calculate frequency of an electrical circuit as per given formula: f=sqrt[(1/LC)-(R^2/4*C^2)]
for different values of C b/w 0.01 to 0.1 in steps of 0.01*/

#include<stdio.h>
#include<math.h>
#define L 60
#define R 100
void main(){
long double freq;
long double capa=0.01;
printf("Inductance= 60 H and Resistance= 100 Ohm");
freq=sqrt((1/L*capa)-(R*R/4*capa*capa));
printf("\nfrequency is:%.5lf",freq);

while(capa!=0.1){
    printf("\nFor capacitance %.3lf:",capa);
    printf("\nFrequeny is:%.3lf",freq);
    capa=capa+0.01;
}
}