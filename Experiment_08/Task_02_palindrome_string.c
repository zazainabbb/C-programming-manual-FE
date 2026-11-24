#include <stdio.h>

int main()
{
    char text[100];
    int length = 0, i;
    int isPalindrome = 1;                

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Find the length (stop at '\0' or newline)
    while (text[length] != '\0' && text[length] != '\n')
    {
        length++;
    }

    // Compare first character with last, second with second last, ...
    for (i = 0; i < length / 2; i++)
    {
        if (text[i] != text[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
