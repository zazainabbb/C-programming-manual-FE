#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i;
    int *ptr;

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

    // The array name points to the first element.
    // Start from the end and move backwards.
    printf("Array in reverse order: ");
    ptr = numbers + n;           // points just after the last element
    while (ptr > numbers)
    {
        ptr--;                   // move one element back
        printf("%d ", *ptr);     // print the value at that address
    }
    printf("\n");

    return 0;
}
