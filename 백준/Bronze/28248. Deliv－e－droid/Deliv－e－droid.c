#include <stdio.h>

int main(void)
{
    int p;
    int c;
    int f;

    scanf("%d", &p);
    scanf("%d", &c);

    f = p * 50 - c * 10;

    if (p > c)
    {
        f += 500;
    }

    printf("%d", f);

    return 0;
}