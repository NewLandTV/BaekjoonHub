#include <stdio.h>

int n;
char d[1000][1001];

void DFS(int x, int y)
{
	d[y][x] = '#';
	
	if (x + 1 < n && d[y][x + 1] == '.')
	{
		DFS(x + 1, y);
	}
	if (x > 0 && d[y][x - 1] == '.')
	{
		DFS(x - 1, y);
	}
	if (y + 1 < n && d[y + 1][x] == '.')
	{
		DFS(x, y + 1);
	}
	if (y > 0 && d[y - 1][x] == '.')
	{
		DFS(x, y - 1);
	}
	if (x + 1 < n && y + 1 < n && d[y + 1][x + 1] == '.')
	{
		DFS(x + 1, y + 1);
	}
	if (x + 1 < n && y > 0 && d[y - 1][x + 1] == '.')
	{
		DFS(x + 1, y - 1);
	}
	if (x > 0 && y + 1 < n && d[y + 1][x - 1] == '.')
	{
		DFS(x - 1, y + 1);
	}
	if (x > 0 && y > 0 && d[y - 1][x - 1] == '.')
	{
		DFS(x - 1, y - 1);
	}
}

int main(void)
{
	int i, j;
	int z;
	int ok, area;
	
	scanf("%d", &z);
	
	while (z--)
	{
		scanf("%d", &n);
		
		for (i = 0; i < n; i++)
		{
			scanf("%s", d[i]);
		}
		
		for (i = ok = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + 1 < n && j + 1 < n && d[i][j] == '#' && d[i][j + 1] == '#' && d[i + 1][j] == '#' && d[i + 1][j + 1] == '.')
				{
					ok = 1;
					
					DFS(j + 1, i + 1);
					
					break;
				}
				if (i + 1 < n && j > 0 && d[i][j] == '#' && d[i][j - 1] == '#' && d[i + 1][j] == '#' && d[i + 1][j - 1] == '.')
				{
					ok = 1;
					
					DFS(j - 1, i + 1);
					
					break;
				}
				if (i > 0 && j + 1 < n && d[i][j] == '#' && d[i][j + 1] == '#' && d[i - 1][j] == '#' && d[i - 1][j + 1] == '.')
				{
					ok = 1;
					
					DFS(j + 1, i - 1);
					
					break;
				}
				if (i > 0 && j > 0 && d[i][j] == '#' && d[i][j - 1] == '#' && d[i - 1][j] == '#' && d[i - 1][j - 1] == '.')
				{
					ok = 1;
					
					DFS(j - 1, i - 1);
					
					break;
				}
			}
			
			if (ok)
			{
				break;
			}
		}
		
		for (i = area = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (d[i][j] == '#')
				{
					area++;
				}
			}
		}
		
		printf("%d\n", area);
	}
	
	return 0;
}