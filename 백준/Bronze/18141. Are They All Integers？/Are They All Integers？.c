#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n;
	int a[50];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				continue;
			}
			
			for (k = 0; k < n; k++)
			{
				if (k == i || k == j)
				{
					continue;
				}
				
				if ((a[i] - a[j]) % a[k] != 0)
				{
					printf("no");
					
					return 0;
				}
			}
		}
	}
	
	printf("yes");
	
	return 0;
}