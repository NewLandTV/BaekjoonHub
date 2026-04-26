#include <stdio.h>

int main(void)
{
    int i;
    int n, k;
    int a[21];
    
    scanf("%d %d", &n, &k);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d,", &a[i]);
    }
    
    for (n--; k--; n--)
    {
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1] - a[i];
        }
    }
    
    printf("%d", a[0]);
    
    for (i = 1; i <= n; i++)
    {
        printf(",%d", a[i]);
    }
    
    return 0;
}