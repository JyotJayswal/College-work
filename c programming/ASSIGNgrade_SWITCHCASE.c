#include<stdio.h>
void main()
{
    char ch;
    printf("enter your grade:",ch);
    scanf("%c",&ch);

    switch(ch)  // In parenthesis only expression which evaluates to integer or character are used
                // 'float value is not used in switch case'

    {   case'a':printf("your grade is A class\n");  //for single charachter,therefore we used single qoute''
        break;  // break is used to terminate the respective case

        case'b':printf("your grade is B class\n");
        break;  //case labels are constants or constant expression evaluate to integer or character.
                //case labels end with a colon mark.
        case'c':printf("your grade is C class");
        break;

        case'd':printf("your class is D class");
        break;

        case'f':printf("you are fail!");
        break;

    default:printf("invalid input"); //default is optional case.when no value satisfy to any case,it wil executed.
    }

}

/*SYNTAX FOR SWITCH CASE

switch(expression)
{
    case value1:
                block-1
                break;
    case value2:
                block-2
                break; 
        ......
        ......
    default:
                default block
                break;                           
}
statement x;
*/