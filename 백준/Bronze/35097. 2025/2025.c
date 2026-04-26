#include <stdio.h>

int main(void)
{
    int n;
    int a, b;
    int v;
    
    while (1)
    {
        scanf("%d", &n);
        
        if (n == 0)
        {
            break;
        }
        
        v = 0;
        
        for (a = 1; a <= n; a++)
        {
            for (b = 1; b <= n; b++)
            {
                v += a * b;
            }
        }
        
        printf("%d\n", v);
    }
    
    return 0;
}