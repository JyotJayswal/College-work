#include<stdio.h>
void main()
{   
    int a,b,c;
    printf("enter any three integer values:",a,b,c);
    scanf("%d %d %d",&a,&b,&c);

//USING NESTED IF...ELSE
    if(a>b)
        {
            if(a>c)
                {
                    printf("%d is is the largest number.",a);
                }
            else
                {
                    printf("%d is the largest number.",c);
                }
                
        }
    else
        {
            if(b>c)
                {
                    printf("%d is the largest number.",b);
                }
            else
                {
                    printf("%d is the largest number.",c);
                }    
        }

}

/*SYNTAX OF NESTED IF...ELSE

    if(condition-1 OR test expression-1)
        {
            true block-1 statements;  IF ONLY 1 STATEMENT IS THEIR IN IF BLOCK THEN CURLY BRACKETS ARE NOT NECESSARY
            
            if(test expression-2)
                {
                    true block-2 statements;
                }
            else
                {
                    false block-2 statements;
                }

        }
     else
        {
            false block-1 statements;  IF ONLY 1 STATEMENT IS THEIR IN ELSE BLOCK THEN CURLY BRACKETS ARE NOT NECESSARY

            if(test expression-3)
                {
                    true block-3 statements;
                }
            else
                {
                    false block-3 statements;
                }
        }
*/