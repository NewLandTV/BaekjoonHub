#include <stdio.h>

#define F(x) ((x) % 1000000007)

int main(void)
{
    unsigned long long a, x;
    int result;
    
    scanf("%llu", &a);
    scanf("%llu", &x);
    
    for (result = 1; x; x >>= 1)
    {
        if (x & 1)
        {
            result = F(F(result) * F(a));
        }
        
        a = F(F(a) * F(a));
    }
    
    printf("%d", result);
    
    return 0;
}