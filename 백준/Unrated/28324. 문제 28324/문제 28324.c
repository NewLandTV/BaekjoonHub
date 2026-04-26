#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int v[500000];
    int cur = 0;
    long long sum = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    
    for (i = n - 1; i >= 0; i--)
    {
        if (cur + 1 <= v[i])
        {
            cur++;
        }
        else
        {
            cur = v[i];
        }
        
        sum += cur;
    }
    
    printf("%lld", sum);
    
    return 0;
}