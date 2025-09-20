/*radius of circle is given,compute & display its area.
use symbolic constant to define pie & assume a suitable value for radius.*/

#include<stdio.h>
#include<math.h>
#define pi 3.14159
#define radius 5
void main(){
float area;
area=pi*(pow(radius,2));
printf("radius of circle:%d\n",radius);
printf("area of circle is:%.3f units",area);
}