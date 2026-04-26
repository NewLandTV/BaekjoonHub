#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int b, n;
	int a, l, r;
	
	while (1)
	{
		scanf("%d %d", &b, &n);
		
		if (b == 0 && n == 0)
		{
			break;
		}
		
		for (i = 1; i <= b; i++)
		{
			l = pow(i, n);
			
			if (b > l)
			{
				continue;
			}
			
			r = pow(i - 1, n);
			a = (b - l) < (r - b) ? i - 1 : i;
			
			printf("%d\n", a);
			
			break;
		}
	}
	
	return 0;
}