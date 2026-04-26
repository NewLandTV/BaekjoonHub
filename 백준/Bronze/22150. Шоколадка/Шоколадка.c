#include <stdio.h>

int main(void)
{
    int i;
    int t;
    int n, l, r, sum;
    
    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d", &n);
        
        for (i = sum = 0; i < n; i++)
        {
            scanf("%d %d", &l, &r);
            
            sum += l + r;
        }
        
        printf("%s\n", n * n != sum ? "yes" : "no");
    }
    
    return 0;
}