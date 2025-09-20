/*Write a program in C to implement pointers to structures.*/

#include<stdio.h>
struct student{    //create a user-defined data type of name: struct students
    char name[20];
    int roll;
    int age;
};
void main(){
    struct student s1={"Alice",123,20}; //declare a variable s1 of data type struct students

    struct student *ptr;   //declare a pointer to structure
    ptr=&s1;    //assign address of structure variable to pointer
    
     // Access members using pointer (-> operator)
    printf("Student Details (Using pointer to structure):\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll);
    printf("age: %d\n", ptr->age);

    // Modify values using pointer
    ptr->roll = 92;
    ptr->age=19;
    printf("\nAfter updating roll no and age using pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("Marks : %d\n", ptr->roll);
    printf("age : %d\n", ptr->age);

}