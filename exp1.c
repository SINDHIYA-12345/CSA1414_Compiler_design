#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[200];
    int i = 0;

    printf("Enter the expression:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        // Ignore spaces, tabs, new lines
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
            continue;
        }

        // Ignore single-line comment //
        if (str[i] == '/' && str[i + 1] == '/')
        {
            break;
        }

        // Ignore multi-line comment /* */
        if (str[i] == '/' && str[i + 1] == '*')
        {
            i += 2;
            while (!(str[i] == '*' && str[i + 1] == '/'))
                i++;
            i += 2;
            continue;
        }

        // Identifier
        if (isalpha(str[i]) || str[i] == '_')
        {
            printf("%c --> Identifier\n", str[i]);
        }

        // Constant
        else if (isdigit(str[i]))
        {
            printf("%c --> Constant\n", str[i]);
        }

        // Operators
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
                 str[i] == '/' || str[i] == '=' || str[i] == '%' ||
                 str[i] == '<' || str[i] == '>')
        {
            printf("%c --> Operator\n", str[i]);
        }

        i++;
    }

    return 0;
}

input:
a = b + 10 * c // comment

output:
a --> Identifier
= --> Operator
b --> Identifier
+ --> Operator
1 --> Constant
0 --> Constant
* --> Operator
c --> Identifier
