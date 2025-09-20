/*Create a structure Student in C with student name, student roll number and student address
as its data members. Create the variable of type student and print the values*/

#include<stdio.h>

struct student{ //create a structure student
    char name[20];  
    int roll;   
    char address[30];
};

int main(){
    struct student s1;  //declaration of structure variable
    printf("Enter the name of student:");
    scanf("%s",s1.name);  //taking name as input from user
    printf("Enter the roll no of student:");
    scanf("%d",&s1.roll);  //taking roll no as input from user
    printf("Enter the address of the student:");
    scanf("%s",s1.address);  //taking address as input from user

    printf("\nDetails of student are as follows:\n");
    printf("Name: %s\n",s1.name);
    printf("Roll no: %d\n",s1.roll);
    printf("Address: %s\n",s1.address);

    return 0;
}