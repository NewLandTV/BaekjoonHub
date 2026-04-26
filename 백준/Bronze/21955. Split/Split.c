#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char n[20];
    int len;

    scanf("%s", n);

    len = strlen(n);

    for (i = 0; i < len >> 1; i++)
    {
        printf("%c", n[i]);
    }

    printf(" ");

    for (i = len >> 1; i < len; i++)
    {
        printf("%c", n[i]);
    }

    return 0;
}