#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int cnt;
    
    while (1)
    {
        scanf("%d", &n);
        
        if (n == 0)
        {
            break;
        }
        
        for (cnt = 0, i = 1; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                if ((i * (i + 1) >> 1) - (j * (j + 1) >> 1) == n)
                {
                    cnt++;
                }
            }
        }
        
        printf("%d\n", cnt);
    }
    
    return 0;
}