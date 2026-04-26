#include <stdio.h>

int w, h;
int map[50][50];

void DFS(int x, int y);

int main(void)
{
	int i, j;
	int c;
	
	while (1)
	{
		scanf("%d %d", &w, &h);
		
		if (w == 0 && h == 0)
		{
			break;
		}
		
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
			{
				scanf("%d", &map[i][j]);
			}
		}
		
		for (i = c = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (map[i][j])
				{
					DFS(j, i);
					
					c++;
				}
			}
		}
		
		printf("%d\n", c);
	}
	
	return 0;
}

void DFS(int x, int y)
{
	if (!map[y][x])
	{
		return;
	}
	
	map[y][x] = 0;
	
	if (x > 0)
	{
		if (y > 0)
		{
			DFS(x - 1, y - 1);
		}
		
		DFS(x - 1, y);
		
		if (y < h - 1)
		{
			DFS(x - 1, y + 1);
		}
	}
	
	if (y > 0)
	{
		DFS(x, y - 1);
	}
	
	if (y < h - 1)
	{
		DFS(x, y + 1);
	}
	
	if (x < w - 1)
	{
		if (y > 0)
		{
			DFS(x + 1, y - 1);
		}
		
		DFS(x + 1, y);
		
		if (y < h - 1)
		{
			DFS(x + 1, y + 1);
		}
	}
}