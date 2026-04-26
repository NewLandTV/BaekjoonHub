#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int a[50][50], b[50][50];
	int map[49][49] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (!a[j][i])
			{
				continue;
			}
			
			if (j + 1 < n && a[j + 1][i])
			{
				map[j++][i]++;
			}
			else
			{
				printf("NO");
				
				return 0;
			}
		}
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (!b[i][j])
			{
				continue;
			}
			
			if (j + 1 < n && b[i][j + 1])
			{
				map[i][j++]++;
			}
			else
			{
				printf("NO");
				
				return 0;
			}
		}
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (map[i][j] >= 2)
			{
				printf("NO");
				
				return 0;
			}
		}
	}
	
	printf("YES");
	
	return 0;
}