#include <stdio.h>

int main(void)
{
	int i;
	int r, c;
	int n, m, k;
	int a[100][100], b[100][100], mul[100][100] = { 0, };
	
	scanf("%d %d", &n, &m);
	
	for (r = 0; r < n; r++)
	{
		for (c = 0; c < m; c++)
		{
			scanf("%d", &a[r][c]);
		}
	}
	
	scanf("%d %d", &m, &k);
	
	for (r = 0; r < m; r++)
	{
		for (c = 0; c < k; c++)
		{
			scanf("%d", &b[r][c]);
		}
	}
	
	for (r = 0; r < n; r++)
	{
		for (c = 0; c < k; c++)
		{
			for (i = 0; i < m; i++)
			{
				mul[r][c] += a[r][i] * b[i][c];
			}
		}
	}
	
	for (r = 0; r < n; r++)
	{
		for (c = 0; c < k; c++)
		{
			printf("%d ", mul[r][c]);
		}
		
		printf("\n");
	}
	
	return 0;
}