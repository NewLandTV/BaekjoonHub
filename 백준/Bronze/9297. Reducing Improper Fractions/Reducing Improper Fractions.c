#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n, d;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d %d", &n, &d);
		printf("Case %d: ", i);
		
		if (n == 0)
		{
			printf("%d\n", n);
			
			continue;
		}
		
		if (n / d > 0)
		{
			printf("%d ", n / d);
		}
		
		if (n % d != 0)
		{
			printf("%d/%d", n % d, d);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}