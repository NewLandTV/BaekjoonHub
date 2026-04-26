#include <stdio.h>

int main(void)
{
    int i;
    int s, k;
    long long result = 1;
    
    scanf("%d %d", &s, &k);
    
    for (i = 0; i < k - s % k; i++)
    {
        result *= s / k;
    }
    
    for (i = 0; i < s % k; i++)
    {
        result *= s / k + 1;
    }
    
    printf("%lld", result);
    
    return 0;
}