#include<stdio.h>
void main()
{
    int i;

    printf("enter an integer value:",i);
    scanf("%d",&i);

    if(i%2==0)  // %=modulus function,which gives the value of remainder
        {
            printf("the number is even");
        }
    else
        {
        printf("the number is odd");
        }

}

/*SYNTAX OF IF...ELSE

    if(condition OR test expression)
        {
            true block statements;  IF ONLY 1 STATEMENT IS THEIR IN IF BLOCK THEN CURLY BRACKETS ARE NOT NECESSARY

        }
     else
        {
            false block statements;  IF ONLY 1 STATEMENT IS THEIR IN ELSE BLOCK THEN CURLY BRACKETS ARE NOT NECESSARY

        }
*/