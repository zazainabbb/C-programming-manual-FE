#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i, largest;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size! Please enter a value between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first element is the largest, then compare with the rest
    largest = numbers[0];
    for (i = 1; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
