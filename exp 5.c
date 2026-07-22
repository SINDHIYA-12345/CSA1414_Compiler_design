sindhiya(192421429)

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an operator: ");
    scanf("%c", &ch);

    if (ch == '+')
        printf("+ is an Addition Operator\n");
    else if (ch == '-')
        printf("- is a Subtraction Operator\n");
    else if (ch == '*')
        printf("* is a Multiplication Operator\n");
    else if (ch == '/')
        printf("/ is a Division Operator\n");
    else
        printf("Invalid Operator\n");

    return 0;
}
input:
+
output:
addition opperator
