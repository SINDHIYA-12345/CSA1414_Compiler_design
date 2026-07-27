sindhiya(192421429)

  #include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter the string: ");
    scanf("%s", str);

    if(strcmp(str, "aabb") == 0)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}

input:
aabb

Output:
Enter the string: aabb
String Accepted
