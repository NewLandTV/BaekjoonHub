#include <stdio.h>

int main(void)
{
    int n;
    int angry;
    long long sum = 0;
    int stack = 0;
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d", &angry);
        
        if (angry == 1)
        {
            stack++;
        }
        else
        {
            stack--;
        }
        
        sum += stack;
    }
    
    printf("%lld", sum);
    
    return 0;
}