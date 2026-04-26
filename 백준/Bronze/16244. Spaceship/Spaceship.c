#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int f[100000];
	int sum = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &f[i]);
		
		sum += f[i];
	}
	
	for (i = 0; i < n; i++)
	{
		if (sum != f[i] * 2)
		{
			continue;
		}
		
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			
			printf("%d ", f[j]);
		}
		
		printf("%d", f[i]);
		
		break;
	}
	
	return 0;
}