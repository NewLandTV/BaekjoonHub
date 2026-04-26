#include <stdio.h>

int main(void)
{
    int n, k;
    int x, a;
    
    scanf("%d %d", &n, &k);
    
    x = n;
    
    if (n & 1)
    {
        n++;
    }
    
    n >>= 1;
    
    while (k--)
    {
        scanf("%d", &a);
        printf("%d ", a > n ? x : 1);
    }
    
    return 0;
}