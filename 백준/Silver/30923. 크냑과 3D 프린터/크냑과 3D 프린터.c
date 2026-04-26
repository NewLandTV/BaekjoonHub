#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int i;
    int n;
    int h[32768];
    int sum = 0;
    int neighbor = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
        
        sum += h[i];
        
        if (i > 0)
        {
            neighbor += Abs(h[i - 1] - h[i]);
        }
    }
    
    if (n == 1)
    {
        printf("%d", h[0] * 4 + 2);
        
        return 0;
    }
    else if (n == 2)
    {
        printf("%d", Abs(h[0] - h[1]) + sum * 3 + 4);
        
        return 0;
    }
    
    printf("%u", (sum + n) * 2 + h[0] + h[n - 1] + neighbor);
    
    return 0;
}