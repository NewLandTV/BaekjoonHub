#include <stdio.h>

int main(void)
{
	int i;
    int n;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i += 2)
    {
    	printf("%d ", i);
    }
    
    for (i = n & 1 ? n - 1 : n; i > 0; i -= 2)
    {
    	printf("%d ", i);
    }
    
    return 0;
}