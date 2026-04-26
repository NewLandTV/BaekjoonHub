#include <stdio.h>

#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int i;
	int n;
	int a[1001];
	unsigned int max;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (i = max = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (i = 2; i < n; i++)
		{
			max = Max(a[i - 2] + a[i - 1] + a[i], max);
		}
		
		printf("%d\n", max);
	}
	
	return 0;
}