#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // A number is even if it is exactly divisible by 2
    if (number % 2 == 0)
    {
        printf("%d is an EVEN number.\n", number);
    }
    else
    {
        printf("%d is an ODD number.\n", number);
    }

    return 0;
}
