#include<stdio.h>
#define NAME "Jyot"  //globally declared variable
    void main()
{
        int x;       //local declared variable      
        double y;

        printf("enter a integer value:");
        scanf("%d",&x);

        printf("enter a float value:");
        scanf("%lf",&y);

          printf("you entered integer:%d\n",x);

          printf("you entered integer:%5d\n",x);

          printf("you entered integer:%-5d\n",x);

          printf("you entered float:%lf\n",y);//the thing b/w % and character conversion shows the alignment.

          printf("you entered float:%.3lf\n",y);

          printf("you entered float:%10.2lf\n",y);

          printf("the sum of %d and %.3lf is %8.3lf\n",x,y,x+y);

          printf("hello %s",NAME);
}

/*some other format specifiers
%d for digit/integer value
%f for float value
%c for single charchter
%s for string
%lf for double
%h for short 
%e for exponent
%u for unsigned value
%x OR %X for hexadeicmal number
%p for print the argument of pointer
*/