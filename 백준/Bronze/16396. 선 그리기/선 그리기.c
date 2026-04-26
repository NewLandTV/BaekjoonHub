#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int x, y;
	int d[10000] = { 0, };
	int sum = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &x, &y);
		
		for (i = x - 1; i < y - 1; i++)
		{
			d[i] = 1;
		}
	}
	
	for (i = 0; i < 10000; i++)
	{
		if (d[i] == 1)
		{
			sum++;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}