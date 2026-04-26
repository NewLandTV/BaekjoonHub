#include <stdio.h>

#define Min(a, b) (a > b ? b : a)

int main(void)
{
    int n, m, k;
    
    scanf("%d %d %d", &n, &m, &k);
    printf("%d", Min(m, k) + Min(n - m, n - k));
    
    return 0;
}