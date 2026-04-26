#include <stdio.h>

int n;
int tmap[100][100];

void DFS(int x, int y);

int main(void)
{
	int i, j, h;
	int map[100][100];
	int maxH = 0;
	int cnt, maxCnt = 1;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &map[i][j]);
			
			if (maxH < map[i][j])
			{
				maxH = map[i][j];
			}
		}
	}
	
	for (h = 0; h < maxH; h++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				tmap[i][j] = map[i][j] <= h ? 0 : map[i][j];
			}
		}
		
		for (i = cnt = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (tmap[i][j])
				{
					DFS(i, j);
					
					cnt++;
				}
			}
		}
		
		if (maxCnt < cnt)
		{
			maxCnt = cnt;
		}
	}
	
	printf("%d", maxCnt);
	
	return 0;
}

void DFS(int x, int y)
{
	tmap[x][y] = 0;
	
	if (x > 0 && tmap[x - 1][y])
	{
		DFS(x - 1, y);
	}
	if (x < n - 1 && tmap[x + 1][y])
	{
		DFS(x + 1, y);
	}
	if (y > 0 && tmap[x][y - 1])
	{
		DFS(x, y - 1);
	}
	if (y < n - 1 && tmap[x][y + 1])
	{
		DFS(x, y + 1);
	}
}