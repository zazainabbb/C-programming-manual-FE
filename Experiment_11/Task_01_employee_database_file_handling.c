#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    char designation[30];
    float salary;
};

int main()
{
    struct employee e;
    FILE *file;
    int choice;

    do
    {
        printf("\n--- EMPLOYEE DATABASE ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                file = fopen("employees.txt", "a");

                printf("Enter Employee ID: ");
                scanf("%d", &e.id);

                printf("Enter Name: ");
                scanf("%s", e.name);

                printf("Enter Designation: ");
                scanf("%s", e.designation);

                printf("Enter Salary: ");
                scanf("%f", &e.salary);

                fprintf(file, "%d %s %s %.2f\n",
                        e.id, e.name, e.designation, e.salary);

                fclose(file);
                printf("Employee added successfully.\n");
                break;

            case 2:
                file = fopen("employees.txt", "r");

                if(file == NULL)
                {
                    printf("No employee records found.\n");
                    break;
                }

                printf("\nID\tName\tDesignation\tSalary\n");

                while(fscanf(file, "%d %s %s %f",
                             &e.id, e.name, e.designation, &e.salary) == 4)
                {
                    printf("%d\t%s\t%s\t%.2f\n",
                           e.id, e.name, e.designation, e.salary);
                }

                fclose(file);
                break;

            case 3:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}