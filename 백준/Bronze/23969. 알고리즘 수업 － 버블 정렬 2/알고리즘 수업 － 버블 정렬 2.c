#include <stdio.h>

int main(void)
{
	int i, j;
	int n, k;
	int a[10000];
	int c = 0, temp;
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (c == k)
			{
				break;
			}
			
			if (a[j] <= a[j + 1])
			{
				continue;
			}
			
			c++;
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
		
		if (c == k)
		{
			break;
		}
	}
	
	if (c < k)
	{
		printf("-1");
		
		return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}