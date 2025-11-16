#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int v[1001];
	int peak;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		peak = 0;
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &v[i]);
		}
		
		for (i = 1; i < n - 1; i++)
		{
			if (v[i - 1] < v[i] && v[i] > v[i + 1])
			{
				peak++;
			}
		}
		
		printf("%d\n", peak);
	}
	
	
	return 0;
}