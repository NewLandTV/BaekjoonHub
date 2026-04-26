#include <stdio.h>
#include <stdlib.h>

int n;
int map[25][25];
int fmap[25][25];
int g[313];
int gcount;

int Compare(const int* first, const int* second);
void DFS(int x, int y);

int main(void)
{
	int i, j;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%1d", &map[i][j]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (map[i][j] != 1 || fmap[i][j] != 0)
			{
				continue;
			}
			
			DFS(j, i);
			
			gcount++;
		}
	}
	
	qsort(g, gcount, sizeof(int), Compare);
	printf("%d\n", gcount);
	
	for (i = 0; i < gcount; i++)
	{
		printf("%d\n", g[i]);
	}
	
	return 0;
}

int Compare(const int* first, const int* second)
{
	if (*first > *second)
	{
		return 1;
	}
	else if (*first < *second)
	{
		return -1;
	}
	
	return 0;
}

void DFS(int x, int y)
{
	fmap[y][x] = 1;
	g[gcount]++;
	
	if (y + 1 < n && fmap[y + 1][x] == 0 && map[y + 1][x] == 1)
	{
		DFS(x, y + 1);
	}
	if (y - 1 >= 0 && fmap[y - 1][x] == 0 && map[y - 1][x] == 1)
	{
		DFS(x, y - 1);
	}
	if (x + 1 < n && fmap[y][x + 1] == 0 && map[y][x + 1] == 1)
	{
		DFS(x + 1, y);
	}
	if (x - 1 >= 0 && fmap[y][x - 1] == 0 && map[y][x - 1] == 1)
	{
		DFS(x - 1, y);
	}
}