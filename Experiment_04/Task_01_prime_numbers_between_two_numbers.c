#include <stdio.h>

// Function declaration (prototype)
int isPrime(int number);

int main()
{
    int start, end, i, temp;
    int count = 0;

    printf("Enter the first number  : ");
    scanf("%d", &start);
    printf("Enter the second number : ");
    scanf("%d", &end);

    // If the numbers are in the wrong order, swap them
    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++)
    {
        if (isPrime(i) == 1)     // function call
        {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("none");
    }
    printf("\nTotal prime numbers found = %d\n", count);

    return 0;
}

// Function definition: returns 1 if number is prime, otherwise 0
int isPrime(int number)
{
    int i;

    if (number <= 1)           // 0, 1 and negative numbers are not prime
    {
        return 0;
    }

    // Checking divisors only up to the square root is enough
    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
