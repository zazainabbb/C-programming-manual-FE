#include <stdio.h>

int main()
{
    int choice, i, marks[5], total;
    float percentage;
    char name[30], grade;

menu:
    printf("\n--- Student Grade and Result Management ---\n");
    printf("1. Enter Student Details\n");
    printf("2. Calculate Total and Percentage\n");
    printf("3. Display Grade\n");
    printf("4. Display Result\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter student name: ");
            scanf("%s", name);

            total = 0;
            for(i = 0; i < 5; i++)
            {
                printf("Enter marks of subject %d: ", i + 1);
                scanf("%d", &marks[i]);
                total = total + marks[i];
            }

            percentage = total / 5.0;
            printf("Details entered successfully.\n");
            break;

        case 2:
            printf("Total = %d / 500\n", total);
            printf("Percentage = %.2f%%\n", percentage);
            break;

        case 3:
            switch((int)percentage / 10)
            {
                case 10:
                case 9: grade = 'A'; break;
                case 8: grade = 'B'; break;
                case 7: grade = 'C'; break;
                case 6: grade = 'D'; break;
                case 5: grade = 'E'; break;
                default: grade = 'F';
            }

            printf("Grade = %c\n", grade);
            break;

        case 4:
            for(i = 0; i < 5; i++)
            {
                if(marks[i] < 40)
                {
                    printf("Result = FAIL\n");
                    goto menu;
                }
            }

            printf("Result = PASS\n");
            break;

        case 5:
            goto end;

        default:
            printf("Invalid choice!\n");
    }

    goto menu;

end:
    printf("Thank you!\n");

    return 0;
}