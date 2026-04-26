#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[100], b[100];
	int x = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			x++;
		}
		else if (a[i] > b[i])
		{
			x += 3;
		}
	}
	
	printf("%d", x);
	
	return 0;
}