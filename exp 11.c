 sindhiya(192421429)

   #include <stdio.h>

struct symbol
{
    char name[20];
    char type[20];
    int size;
};

int main()
{
    struct symbol s;

    printf("Enter Symbol Name: ");
    scanf("%s", s.name);

    printf("Enter Data Type: ");
    scanf("%s", s.type);

    printf("Enter Size: ");
    scanf("%d", &s.size);

    printf("\nSymbol Table\n");
    printf("Name\tType\tSize\n");
    printf("%s\t%s\t%d\n", s.name, s.type, s.size);

    return 0;
}

input:
Enter Symbol Name: a
Enter Data Type: int
Enter Size: 4
output:
Symbol Table
Name    Type    Size
a       int     4
