#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a, d, g;
	int cur;
	int max = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &a, &d, &g);
		
		cur = a * (d + g);
		
		if (a == d + g)
		{
			cur <<= 1;
		}
		
		if (cur > max)
		{
			max = cur;
		}
	}
	
	printf("%d", max);
	
	return 0;
}