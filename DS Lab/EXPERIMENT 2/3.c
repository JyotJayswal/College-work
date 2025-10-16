/*Create a structure Organization with organization name and organization ID as its data members.
Next,create another structure Employee that is nested in structure Organization with employee ID,
employee salary and employee name as its data members.
Write a program in such a way that there are two organizations and each of these contains two employees.*/

#include<stdio.h>
struct organization{    //create a structure organization
    char org_name[20];
    int org_id;

    struct employee{    //nested structure employee
        int emp_id;
        float emp_salary;
        char emp_name[20];
    }emps[2]; //array of structure emp
};

void print_info(struct organization orgs[]){
    for(int i=0;i<2;i++){
        printf("\n--- Organization: %s (ID: %d) ---\n", orgs[i].org_name, orgs[i].org_id);
        for(int j=0;j<2;j++){
            printf("Employee Name : %s\n", orgs[i].emps[j].emp_name);
            printf("Employee ID   : %d\n", orgs[i].emps[j].emp_id);
            printf("Salary        : %.2f\n\n", orgs[i].emps[j].emp_salary);
        }
    }
}
void main(){
    struct organization orgs[2];  //declaration of array of structure variable
    for(int i=0;i<2;i++){   //for accessing the structure organization

        printf("enter the name of organization: ");
        scanf("%s",orgs[i].org_name);
        printf("enter the id of organization:");
        scanf("%d",&orgs[i].org_id);
        printf("enter the details of 2 employees of %s organization:\n",orgs[i].org_name);

        for(int j=0;j<2;j++){   //for accessing the structure employee
            printf("Enter the name of employee: ");
            scanf("%s",orgs[i].emps[j].emp_name);
            printf("Enter the id of employee: ");
            scanf("%d",&orgs[i].emps[j].emp_id);
            printf("Enter the salary of employee: ");
            scanf("%f",&orgs[i].emps[j].emp_salary);
        }
    }
    print_info(orgs);
}