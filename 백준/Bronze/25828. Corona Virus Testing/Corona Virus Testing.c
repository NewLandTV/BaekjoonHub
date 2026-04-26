#include <stdio.h>

int main(void)
{
    int g, p, t;
    int r1, r2;
    
    scanf("%d %d %d", &g, &p, &t);
    
    r1 = g * p;
    r2 = g + p * t;
    
    if (r1 == r2)
    {
        printf("0");
        
        return 0;
    }
    
    printf("%d", r1 < r2 ? 1 : 2);
    
    return 0;
}