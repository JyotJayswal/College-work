#include<stdio.h>
void main()
{
    int i,j,rows,cols;
    printf("enter the no.of rows to be printed:",rows);
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++)
    {   
        for(j=1;j<rows;j++)
            {
                printf(" ");
            }

/*        for(i=1,j=1;j<=i;j++)
            {
                printf("%d",i);
            }

        printf("\n");

    }

}