sindhiya(192421429)

  #include <stdio.h>

int main()
{
    char a, b, c, d;

    printf("Enter Expression (a+b*c): ");
    scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);

    printf("\nThree Address Code:\n");
    printf("t1 = %c %c %c\n", c, d, e);
    printf("t2 = %c %c t1\n", a, b);
    printf("Result = t2\n");

    return 0;
}

input:
char a, b, c, d, e;

output:
Enter Expression (a+b*c): a+b*c

Three Address Code:
t1 = b * c
t2 = a + t1
Result = t2


  
