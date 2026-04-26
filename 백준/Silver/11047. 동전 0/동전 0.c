#include <stdio.h>

int main(void)
{
	int i;
	int n, k;
	int a[10];
	int c = 0;
	int x;
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (k < a[n - i - 1])
		{
			continue;
		}
		
		x = k / a[n - i - 1];
		k -= x * a[n - i - 1];
		c += x;
	}
	
	printf("%d", c);
	
	return 0;
}