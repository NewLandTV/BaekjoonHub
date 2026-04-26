#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[1001], b;
	int count = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b);
		
		if (a[i] <= b)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}