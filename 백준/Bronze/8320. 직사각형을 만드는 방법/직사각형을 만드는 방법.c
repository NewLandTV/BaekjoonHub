#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int result = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (i * j <= n)
            {
                result++;
            }
        }
    }
    
    printf("%d", result);
    
    return 0;
}