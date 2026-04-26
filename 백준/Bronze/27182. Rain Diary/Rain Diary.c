#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d", n > 7 ? (n - 7) : (m + 7));

    return 0;
}