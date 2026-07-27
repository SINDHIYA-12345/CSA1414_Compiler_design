sindhiya(192421429)

#include <stdio.h>

int main() {
    printf("Grammar:\n");
    printf("S -> AaAb | BbBa\n");
    printf("A -> Epsilon\n");
    printf("B -> Epsilon\n\n");

    printf("FOLLOW(S) = { $ }\n");
    printf("FOLLOW(A) = { a, b }\n");
    printf("FOLLOW(B) = { b, a }\n");

    return 0;
} 

output:

Grammar:
S -> AaAb | BbBa
A -> Epsilon
B -> Epsilon

FOLLOW(S) = { $ }
FOLLOW(A) = { a, b }
FOLLOW(B) = { b, a }
