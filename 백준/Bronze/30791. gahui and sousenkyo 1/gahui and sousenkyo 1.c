#include <stdio.h>

int main(void)
{
    int i;
    int v[5];
    int count = 0;
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
        
        if (i > 0 && v[0] - v[i] <= 1000)
        {
            count++;
        }
    }
    
    printf("%d", count);
    
	return 0;
}