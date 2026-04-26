#include <stdio.h>

int main(void)
{
	int n, m;
	int i, j;
	int a[100][100], b[100][100];
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", a[i][j] + b[i][j]);
		}
		
		putchar('\n');
	}
	
	return 0;
}