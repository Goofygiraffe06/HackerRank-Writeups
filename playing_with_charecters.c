#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);
    scanf("\n"); // Discard the newline character

    scanf("%[^\n]%*c", s);
    scanf("\n"); // Discard the newline character

    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}