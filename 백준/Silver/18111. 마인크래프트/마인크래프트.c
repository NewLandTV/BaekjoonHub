#include <stdio.h>

int n, m, b;
int g[500][500];

int Work(int h);

int main(void)
{
	int i, j;
	int prev, cur;
	int t = 0, minHeight = 256;
	
	scanf("%d %d %d", &n, &m, &b);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &g[i][j]);
			
			if (minHeight > g[i][j])
			{
				minHeight = g[i][j];
			}
		}
	}
	
	for (;; minHeight--)
	{
		prev = Work(minHeight);
		
		if (prev == -1)
		{
			continue;
		}
		
		for (cur = 0;;)
		{
			cur = Work(minHeight + 1);
			
			if (cur != -1 && cur <= prev)
			{
				minHeight++;
				prev = cur;
			}
			else
			{
				break;
			}
		}
		
		break;
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (g[i][j] > minHeight)
			{
				t += (g[i][j] - minHeight) * 2;
				b++;
			}
			else if (g[i][j] < minHeight)
			{
				t += minHeight - g[i][j];
			}
		}
	}
	
	printf("%d %d", t, minHeight);
	
	return 0;
}

int Work(int h)
{
	int i, j;
	int up = 0, down = 0;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (g[i][j] > h)
			{
				up += g[i][j] - h;
			}
			else if (g[i][j] < h)
			{
				down += h - g[i][j];
			}
		}
	}
	
	return down - up > b ? -1 : up * 2 + down;
}