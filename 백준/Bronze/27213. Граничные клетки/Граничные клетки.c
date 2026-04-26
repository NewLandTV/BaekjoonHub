#include <stdio.h>

int main(void)
{
    int m, n;
    
    scanf("%d", &m);
    scanf("%d", &n);
    
    if (m == 1)
    {
        printf("%d", n);
    }
    else if (n == 1)
    {
        printf("%d", m);
    }
    else if (m > 1)
    {
        printf("%d", (m - 2 << 1) + (n << 1));
    }
    else if (n > 1)
    {
        printf("%d", (m << 1) + (n - 2 << 1));
    }
    
    return 0;
}