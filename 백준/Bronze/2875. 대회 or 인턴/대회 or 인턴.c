#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int n, m, k;
    
    scanf("%d %d %d", &n, &m, &k);
    
    while (k)
    {
        if (n >> 1 >= m)
        {
            n--;
        }
        else
        {
            m--;
        }
        
        k--;
    }
    
    printf("%d", Min(n >> 1, m));
    
    return 0;
}