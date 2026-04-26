#include <stdio.h>

int main(void)
{
    int i;
    int m[11];
    int n;
    int b, s;
    float l;
    int total = 0;
    
    for (i = 0; i < 11; i++)
    {
        scanf("%d", &m[i]);
    }
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d %f %d", &b, &l, &s);
        
        if (s >= 17 && l >= 2.0f)
        {
            total += m[b];
        }
    }
    
    printf("%d", total);
    
	return 0;
}