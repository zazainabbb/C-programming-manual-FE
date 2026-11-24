#include <stdio.h>

extern int totalCalls;

void counter()
{
    static int callCount = 0;
    auto int increment = 1;

    callCount = callCount + increment;
    totalCalls++;

    printf("Function called %d time(s)\n", callCount);
}

int totalCalls = 0;

int main()
{
    register int i;

    for(i = 1; i <= 5; i++)
    {
        counter();
    }

    printf("Total calls = %d\n", totalCalls);

    return 0;
}