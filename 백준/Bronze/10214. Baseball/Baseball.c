#include <stdio.h>

int main(void)
{
    int i;
    int t;
    int y, k;
    int a, b;
    
    scanf("%d", &t);
    
    while (t--)
    {
        for (a = b = i = 0; i < 9; i++)
        {
            scanf("%d %d", &y, &k);
            
            a += y;
            b += k;
        }
        
        if (a == b)
        {
            printf("Draw\n");
            
            continue;
        }
        
        printf("%s\n", a > b ? "Yonsei" : "Korea");
    }
    
    return 0;
}