    /*1. Write a C program that reads a series of integers from the user and calculates their sum. 
    If the user enters a negative number, break the loop and print the sum. 
    Use a goto statement to restart the loop if the user wishes to continue.*/

#include<stdio.h>
void main()
{
    int i=0,sum=0;      //declaring and initialising the variable value
    int cont,sum2;
    printf("enter the positive integers to calculate their sum:\n");

    while(i>=0)
            {   read:       //put the label to continue the loop if necessary
                scanf("%d",&i);     //reads the integer value

                if(i>=0)    //check the condition for positive integer
                    {   printf("+");
                        sum=sum+i;      //modifying the sum of positive integers
                    }

                else
                    {   
                        printf("\nthe sum of positive integer series is:%d\n",sum);//printing sum before continue
                        printf("if you want to continue press 1 otherwise any number to discontinue-->");//gets user permission to continue or not
                        scanf("%d",&cont);
                        if(cont==1) //check condition for continue
                            {
                                goto read;  //if user wants to continue further,send to it repeats the loop
                            }
                        else
                            {
                                goto final; //if user dont want to continue,send to the final
                            }
                    }

    }

    final:
    printf("\nthe final sum of positive integer series is:%d",sum); //showing final sum 

}