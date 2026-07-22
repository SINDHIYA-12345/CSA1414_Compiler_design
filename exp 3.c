sindhiya(192421429)

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i = 0;

    printf("Enter the program:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        // Ignore spaces, tabs and new lines
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
            continue;
        }

        // Ignore single-line comment
        if (str[i] == '/' && str[i + 1] == '/')
        {
            break;
        }

        // Ignore multi-line comment
        if (str[i] == '/' && str[i + 1] == '*')
        {
            i += 2;
            while (str[i] != '\0' && !(str[i] == '*' && str[i + 1] == '/'))
                i++;

            if (str[i] != '\0')
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

        // Operator
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
                 str[i] == '/' || str[i] == '=' || str[i] == '<' ||
                 str[i] == '>' || str[i] == '%')
        {
            printf("%c --> Operator\n", str[i]);
        }

        i++;
    }

    return 0;
}

input:
int a = 10;

output:
int
a
=
10
;
