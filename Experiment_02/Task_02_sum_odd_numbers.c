#include <stdio.h>

int main()
{
    int start, end, i, temp;
    int sum = 0;

    printf("Enter the first number  : ");
    scanf("%d", &start);
    printf("Enter the second number : ");
    scanf("%d", &end);

    // Make sure start is the smaller number
    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Odd numbers between %d and %d are: ", start, end);

    for (i = start + 1; i < end; i++)
    {
        if (i % 2 != 0)          // odd number check (works for negatives too)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nSum of odd numbers = %d\n", sum);

    return 0;
}
