#include<stdio.h>
int main()
{   int x;
    float y;
    char ch;
    
    printf("enter integer value:");
    scanf(" %d",&x);

    printf("enter float value:");
    scanf(" %f",&y);

    printf("enter charcter value:");
    scanf(" %c",&ch);               //(note the space before %c to handle previous input)

    printf("you entered integer:%d\n",x);
    printf("you entered float:%.2f\n",y);
    printf("you entered character: %c\n",ch);

}






/*another example
#include<stdio.h>
    void main()
{
        int x;
        float y;    //declaring variable
        char z;
        printf("hello everyone.\n");    
        printf("enter any integer value:");
        scanf("%d",&x);     //scanning the value of x from the user

        printf("enter any float value:");
        scanf("%f",&y);     //scanning the value of y from the user

        printf("enter any character value:");
        scanf("%s",&z);      //scanning the value of z from the user    

        printf("you entered integer:%d\n",x);
        printf("you entered float:%.2f\n",y);
        printf("you entered character:%s\n",z);  
facing error 
        //%s is used(for string) instead of %c because %c takes space as a input value.

}  
*/

