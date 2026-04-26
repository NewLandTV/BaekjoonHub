#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[1000];
	int x, y;
	int c = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		
		if (x < y && a[i] == 1)
		{
			c += y - x;
		}
	}
	
	printf("%d", c);
	
	return 0;
}