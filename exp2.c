#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];

    printf("Enter a line:\n");
    fgets(str, sizeof(str), stdin);

    // Check for single-line comment
    if (str[0] == '/' && str[1] == '/')
    {
        printf("It is a Single Line Comment.\n");
    }

    // Check for multi-line comment
    else if (str[0] == '/' && str[1] == '*')
    {
        int len = strlen(str);

        if (str[len - 3] == '*' && str[len - 2] == '/')
        {
            printf("It is a Multi Line Comment.\n");
        }
        else
        {
            printf("Invalid Multi Line Comment.\n");
        }
    }

    // Not a comment
    else
    {
        printf("It is Not a Comment.\n");
    }

    return 0;
}
input:
 // This is a comment
output:
It is a Single Line Comment.
