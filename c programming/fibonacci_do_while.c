#include<stdio.h>
void main()
{   int first=0,second=1,third,n;   //declaring local variable and assigning the value to first and second term of fibonacci series
    int i=2;  //declaring variable by assigning value 2(1st and 2nd term of series already printed)for no.of terms in while loop condition
    
    printf("\nnumber of terms of fibonacci series to be printed:",n);
    scanf("%d",&n);     //get input from user about no.of terms in series
    
    printf("The fibonacci series is:\n%d %d",first,second);  //printing 1st and 2nd term of series

    do   // forming do...while loop OR EXIT CONTROL LOOP OR POST-TESTED LOOP
    {   
        third=first+second;  //storing the value of 1st and 2nd terms to 3rd term by adding(COZ OF LOGIC OF FIBONACCI SERIES)
        printf(" %d",third); //printing the 3rd term  
        first=second;        //modifying or assigning the 2nd term value to 1st term
        second=third;        //modifying or assigning the 3rd term value to 2nd term
        i++;                 //incrementing the value for (printing no.of terms) iteration of loop
    } 
    
    while (i<n);     //condition for no.of terms 
    
}

/*SYNTAX OF DO...WHILE OR EXIT-CONTROL OR POST-TESTED LOOP

       do
            {
       
                //body of loop;
       
            }
        while(condition OR test-expression);    //exit control condition


THE BODY OF DO...WHILE LOOP IS ATLEAST 1 TIME EXECUTE.


 */