sindhiya(192421429)

  #include <stdio.h>

int main()
{
    printf("Original Grammar:\n");
    printf("S -> iEtS | iEtSeS | a\n");
    printf("E -> b\n\n");

    printf("Grammar after Left Factoring:\n");
    printf("S -> iEtSS' | a\n");
    printf("S' -> eS | Epsilon\n");
    printf("E -> b\n");

    return 0;
}

input:
S -> iEtS | iEtSeS | a
E -> b

output:
Original Grammar:
S -> iEtS | iEtSeS | a
E -> b

Grammar after Left Factoring:
S -> iEtSS' | a
S' -> eS | Epsilon
E -> b
