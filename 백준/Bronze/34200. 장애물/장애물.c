#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int x[250000];
    long long d, cur = 0, step = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &x[i]);
        
		if (i > 0 && x[i] - x[i - 1] < 2)
		{
			printf("-1");
			
			return 0;
		}
    }
    
    for (i = 0; i < n; i++)
    {
    	d = (x[i] - cur - 1) >> 1;
		cur += d * 2;
		step += d;
    	
    	if (x[i] - cur == 2)
    	{
    		cur++;
    		step++;
		}
		
		cur += 2;
		step++;
	}
    
    printf("%lld", step);
    
    return 0;
}