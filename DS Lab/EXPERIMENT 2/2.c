/*Modify the above program to implement arrays of structure.
Create an array of 5 students and print their values.*/

#include <stdio.h>

struct student{ //create a structure student
    char name[20];
    int roll;
    char address[30];
};

int main(){
     struct student students[5];  //declaration of array of structure variable
    for(int i=0;i<5;i++){
        printf("Enter the details of student %d:\n",i+1);

        printf("Enter the name of student:");
        scanf("%s",students[i].name);

        printf("Enter the roll no of student:");
        scanf("%d",&students[i].roll);

        printf("Enter the address of the student:");
        scanf("%s",students[i].address);
        
    }
    printf("Details of students are as follows:\n");
    for(int i=0;i<5;i++){
        printf("\nStudent %d:",i+1);
        printf("\nName: %s",students[i].name);
        printf("\nRoll no: %d",students[i].roll);
        printf("\nAddress: %s",students[i].address);

    }

return 0;
}