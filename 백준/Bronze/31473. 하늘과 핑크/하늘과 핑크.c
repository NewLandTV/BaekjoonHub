#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int k;
    int a = 0, b = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k);
        
        a += k;
    }
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k);
        
        b += k;
    }
    
    printf("%d %d", b, a);
    
    return 0;
}