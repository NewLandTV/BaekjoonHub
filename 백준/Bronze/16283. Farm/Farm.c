#include <stdio.h>

int main(void)
{
	int i;
	int a, b, n, w;
	int x, y;
	int ac = 0;
	
	scanf("%d %d %d %d", &a, &b, &n, &w);
	
	for (i = 1; i < n; i++)
	{
		if (a * i + b * (n - i) != w)
		{
			continue;
		}
		
		x = i;
		y = n - i;
		ac++;
	}
	
	if (ac == 1)
	{
		printf("%d %d", x, y);
	}
	else
	{
		printf("-1");
	}
	
	return 0;
}