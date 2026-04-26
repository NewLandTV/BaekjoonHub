#include <stdio.h>

int main(void)
{
    int i;
    int n, d;
    int p[30];
    int sum = 0;
    
    scanf("%d %d", &n, &d);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        
        sum += p[i];
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d\n", d / sum * p[i]);
    }
    
    return 0;
}