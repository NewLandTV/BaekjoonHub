#include <stdio.h>

int main(void)
{
	int i, j;
	int n, x;
	
	for (i = 1; ; i++)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &x);
		}
		
		printf("Case %d: Sorting... done!\n", i);
	}
	
	return 0;
}