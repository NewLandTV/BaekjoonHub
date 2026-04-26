#include <stdio.h>

int main(void)
{
    int i;
    int t;
    int n;
    
    scanf("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        
        while (n >= 5)
        {
            printf("++++ ");
            
            n -= 5;
        }
        
        while (n > 0)
        {
            printf("|");
            
           n--;
        }
        
        printf("\n");
    }
    
    return 0;
}