/* Using for loop print the following:
    *
    **
    ***
    ****
*/


#include<stdio.h>
void main()
{   int i,colmns,rows;  //declaring local variables
    printf("enter the no.of rows to be printed:",i);  //ask user to input the no.of rows
    scanf("%d",&i);  //get input from user

        for(rows=1;rows<=i;rows++)  //for loop for rows
        {
            for(colmns=1;colmns<=rows;colmns++)   //for loop for colmns to print asterisks (LOGIC) 
                {
                    printf("*");
                }
            
            printf("\n");  //new line character after printing no.of asterisks = respective no.of row
        }

}