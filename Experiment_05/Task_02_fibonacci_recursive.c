#include <stdio.h>

// Returns the term at position "position" (position 0 gives 0, 1 gives 1)
int fibonacciRecursive(int position)
{
    if (position == 0)           // base case 1
    {
        return 0;
    }
    if (position == 1)           // base case 2
    {
        return 1;
    }
    // recursive case: sum of the previous two terms
    return fibonacciRecursive(position - 1) + fibonacciRecursive(position - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n <= 0 || n > 40)     // recursion becomes very slow for larger N
    {
        printf("Please enter a number from 1 to 40.\n");
        return 0;
    }

    printf("Fibonacci series (recursive) for %d terms:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}
