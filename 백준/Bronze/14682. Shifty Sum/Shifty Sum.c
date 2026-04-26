#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int k;
    int s;

    scanf("%d", &n);
    scanf("%d", &k);

    s = n;

    for (i = 0; i < k; i++)
    {
        n *= 10;
        s += n;
    }

    printf("%d", s);

    return 0;
}