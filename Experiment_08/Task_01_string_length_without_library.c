#include <stdio.h>

int main()
{
    char text[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);     

    // Count characters until the null character '\0' (or the newline from fgets)
    while (text[length] != '\0' && text[length] != '\n')
    {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
