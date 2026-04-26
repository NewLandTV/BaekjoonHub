#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[100000], c = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		
		if (a[i] == i + 1)
		{
			c++;
			a[i] = i + 1 == n ? 1 : i + 2;
		}
	}
	
	printf("%d\n", c);
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}