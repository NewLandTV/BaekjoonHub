#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int n, m;
    unsigned int* h;
    unsigned int l, r, mid, x;
    long long sum;
    
    scanf("%d %d", &n, &m);
    
    h = (unsigned int*)malloc(sizeof(unsigned int) * n);
    
    for (i = l = r = x = 0; i < n; i++)
    {
        scanf("%u", &h[i]);
        
        if (h[i] > r)
        {
            r = h[i];
        }
    }
    
    while (l <= r)
    {
        mid = l + r >> 1;
        
        for (i = sum = 0; i < n; i++)
        {
            if (h[i] > mid)
            {
                sum += h[i] - mid;
            }
        }
        
        if (sum < m)
        {
            r = mid - 1;
        }
        else
        {
            x = mid;
            l = mid + 1;
        }
    }
    
    free(h);
    printf("%u", x);
    
    return 0;
}