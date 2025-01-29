#include<stdio.h>
void main()
{   int num,temp,remainder,reverse=0;
    printf("enter any number:",num);
    scanf("%d",&num);
    temp=num;   //storing the input number by user to a temporary variable

    for(num;num>0;) //initialising num;condition apply such that loop continues until the input number is greater than zero;
                    //skip the increment part    
    {
        remainder=num%10;   //LOGIC:dividing any number by 10,the remainder will always equal to last digit of original number
        reverse=reverse*10+remainder;  //reversing the original NUM and storing it in result variable 
        num=num/10;  //modifying the value of original input NUM.(LOGIC:dividing any smaller number by larger number,the remainder gives 1 )  
    }

    if(reverse==temp)   //applied condition,if reverse NUM equal to original NUM(stored in temp variable)
        {
            printf("YES! the number is palindrome.");
        }

    else
        {
            printf("NO! the number is not palindrome.");
        }

}

/*SYNTAX OF FOR LOOP (FOR LOOP IS ALSO ENTRY-CONTROLLED LOOP)

    for(initialisation; condition; increment OR decrement)
        {
        
            statements-x;   //body of loop
        
        
        }

*some IMP POINTS of for loop

-->initialisation and increment can be remove from the FOR loop if required,but the semicolon(;) must be their.
-->without condition the FOR loop cannot work and if sets up an'INFINITE LOOP'.
-->a semicolon(;) is must to distinguish all 3 sections of FOR LOOP.
-->a semicolon(;) at last of the parenthesis of FOR LOOP it considered as 'NULL STATEMENT' and produce some non-sense.
-->if the body of FOR LOOP consists only a semicolon(;) then it is considered as 'NULL STATEMENT', 
and executes 1000 times without producing any output which cause time delay.
hence,TIME DELAY LOOPS can be created by using such 'NULL STATEMENT'.


*/