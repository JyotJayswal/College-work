/*Create a structure Organization with organization name and organization ID as its data members.
Next,create another structure Employee that is nested in structure Organization with employee ID,
employee salary and employee name as its data members.
Write a program in such a way that there are two organizations and each of these contains two employees.*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_id;
    float emp_salary;
    char emp_name[30];
};

struct Organization {
    char org_name[30];
    int org_id;
    struct Employee emps[2];
};

// Function to clear leftover newline characters from input buffer
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void display(struct Organization orgs[], int orgCount) {
    for (int i = 0; i < orgCount; i++) {
        printf("\n===== Organization: %s (ID: %d) =====\n", orgs[i].org_name, orgs[i].org_id);
        for (int j = 0; j < 2; j++) {
            printf("Employee Name : %s\n", orgs[i].emps[j].emp_name);
            printf("Employee ID   : %d\n", orgs[i].emps[j].emp_id);
            printf("Employee Salary: %.2f\n\n", orgs[i].emps[j].emp_salary);
        }
    }
}

int main() {
    struct Organization orgs[2];

    for (int i = 0; i < 2; i++) {
        printf("\nEnter the name of organization %d: ", i + 1);
        scanf(" %[^\n]", orgs[i].org_name);
        clearBuffer();

        printf("Enter the ID of organization %d: ", i + 1);
        scanf("%d", &orgs[i].org_id);
        clearBuffer();

        printf("\nEnter details of 2 employees of %s:\n", orgs[i].org_name);
        for (int j = 0; j < 2; j++) {
            printf("\nEmployee %d name: ", j + 1);
            scanf(" %[^\n]", orgs[i].emps[j].emp_name);
            clearBuffer();

            printf("Employee %d ID: ", j + 1);
            scanf("%d", &orgs[i].emps[j].emp_id);
            clearBuffer();

            printf("Employee %d salary: ", j + 1);
            scanf("%f", &orgs[i].emps[j].emp_salary);
            clearBuffer();
        }
    }
    display(orgs, 2);
    return 0;
}
