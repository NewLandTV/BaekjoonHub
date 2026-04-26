#include <stdio.h>

int main(void)
{
    int n, k;
    int p, q;
    
    while (scanf("%d %d", &n, &k) != EOF)
    {
        p = n;
        
        while (n >= k)
        {
            q = n / k;
            p += q;
            n = q + n % k;
        }
        
        printf("%d\n", p);
    }
    
    return 0;
}