#include<stdio.h>
void main()
{
    int num,temp,remainder,reverse=0; 
    printf("enter any number:",num);
    scanf("%d",&num);
    temp=num;       //storing the input number by user to a temporary variable

    while(num>0)    // condition apply such that loop continues until the input number is greater than zero
    {
        remainder=num%10;   //LOGIC:dividing any number by 10,the remainder will always equal to last digit of original number 
        reverse=reverse*10+remainder; //reversing the original NUM and storing it in result variable
        num=num/10; //modifying the value of original input NUM.(LOGIC:dividing any smaller number by larger number,the remainder gives 1 )

    }

    if(reverse==temp)    //applied condition,if reverse NUM equal to original NUM(stored in temp variable)
            {
            printf("YES! the number is palindrome.");
        }
    
    else
        {
            printf("NO! the number is not palindrome.");
        }

}