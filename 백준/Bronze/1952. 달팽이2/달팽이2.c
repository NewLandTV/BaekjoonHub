#include <stdio.h>

int main(void)
{
    int m, n;
    int p = 0, c;
    
    scanf("%d %d", &m, &n);
    
    for (c = -1; m > 0 && n > 0; c++)
    {
        (p = !p) ? m-- : n--;
    }
    
    printf("%d", c);
    
    return 0;
}