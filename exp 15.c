sindhiya(192421429)

  #include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 1, lines = 1;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ' || ch == '\t')
            words++;

        if (ch == '\n')
        {
            lines++;
            words++;
        }
    }

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}

input:
Compiler Design Lab
Lexical Analyzer Program

Output:
Characters = 46
Words = 5
Lines = 2
