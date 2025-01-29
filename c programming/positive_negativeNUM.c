#include<stdio.h>
int main()
{
    int a;
    printf("enter any integer value:",a);
    scanf("%d",&a);

    if(a>0)
        {
            printf("the number is positve.");
        }
       else if(a==0)
                {
                    printf("the number is zero.");
                }
    else
    {
        printf("the number is negative.");
    }            
return 0;
}

/*SYNTAX FOR NESTED ELSE...IF LADDER

if(test condition 1)
{   
    {  test condition 1 true block;
    }
        else if(condition 2)
                {  test condition 2 true block;
                }
                .....
                .....
                else if(condition n)
                {  test condition n true block;
                }
    else
    {
        default OR test condition 1 false block;
    }
    
}
*/