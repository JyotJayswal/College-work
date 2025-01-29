#include<stdio.h>
void main()
{   int number,result=1;        //declaring and assigning values to local variables
    printf("to calculate factorial enter any number:",number); //asks user to input the number 
    scanf("%d",&number);        //gets input from user and stores in number variable

    for(int i=1;i<=number;i++)  //LOGIC:the 1 multiplies with all digits until it equals to the entered number(inclusively)
    {
       result=result*i;
        
    }

    printf("the factorial of %d is: %d",number,result);

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