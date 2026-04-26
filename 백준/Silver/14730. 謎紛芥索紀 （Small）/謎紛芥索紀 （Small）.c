#include <stdio.h>

int main(void)
{
    int n;
    int c, k;
    int result = 0;
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d %d", &c, &k);
        
        result += c * k;
    }
    
    printf("%d", result);
    
    return 0;
}