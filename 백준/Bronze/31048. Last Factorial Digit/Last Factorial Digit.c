#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	int f;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d", &n);
		
		for (i = 1, f = 1; i <= n; i++)
		{
			f *= i;
		}
		
		printf("%d\n", f % 10);
	}
	
	return 0;
}