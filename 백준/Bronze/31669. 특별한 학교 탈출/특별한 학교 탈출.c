#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m;
    char s[100][101];
    int stack;
    
    scanf("%d %d", &n, &m);
    
    for (i = 0; i < n; i++)
    {
        scanf(" %s", s[i]);
    }
    
    for (i = 0; i < m; i++)
    {
        stack = 0;
        
        for (j = 0; j < n; j++)
        {
            if (s[j][i] == 'X')
            {
                stack++;
            }
            else
            {
                stack = 0;
            }
        }
        
        if (stack == n)
        {
            printf("%d", i + 1);
            
            return 0;
        }
    }
    
    printf("ESCAPE FAILED");
    
    return 0;
}