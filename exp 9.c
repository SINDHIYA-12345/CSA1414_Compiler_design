sindhiya(192421429)

  #include <stdio.h>

int main()
{
    printf("Original Grammar:\n");
    printf("L -> L,S | S\n\n");

    printf("Grammar after eliminating Left Recursion:\n");
    printf("L -> SL'\n");
    printf("L' -> ,SL' | Epsilon\n");

    return 0;
}

input:
L -> L,S | S

output:
Original Grammar:
L -> L,S | S

Grammar after eliminating Left Recursion:
L -> SL'
L' -> ,SL' | Epsilon
