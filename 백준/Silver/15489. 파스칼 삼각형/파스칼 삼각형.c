#include <stdio.h>

int main(void)
{
	int i, j;
	int r, c, w;
	unsigned long long p[30][30], sum = 0;
	
	scanf("%d %d %d", &r, &c, &w);
	
	r--;
	c--;
	w--;
	
	for (i = 0; i <= r + w; i++)
	{
		p[i][0] = p[i][i] = 1;
	}
	
	for (i = 2, j = 1; i <= r + w; j++)
	{
		if (i == j)
		{
			i++;
			j = 1;
		}
		
		p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
	}
	
	for (i = r; i <= r + w; i++)
	{
		for (j = c; j <= i - r + c; j++)
		{
			sum += p[i][j];
		}
	}
	
	printf("%llu", sum);
	
	return 0;
}