#include<stdio.h>
void main()
{
    float marks;
    printf("enter your marks:",marks);
    scanf("%f",&marks);

    if(marks>=90)
        {
            printf("your grade is A");
        }
        else if(marks>=80 && marks<90)
                {
                    printf("your grade is B");
                }
                else if(marks>=70 && marks<80)
                        {
                            printf("your grade is C");
                        }
                        else if(marks>=60 && marks<70)
                                {
                                    printf("your grade is D");
                                }
    else
        {
            printf("your grade id F");
        }

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