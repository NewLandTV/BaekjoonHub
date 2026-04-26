#include <stdio.h>

int n, m;
char campus[600][601];
int cnt;

void DFS(int x, int y);

int main(void)
{
	int i, j;
	int x, y;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", campus[i]);
		
		for (j = 0; j < m; j++)
		{
			if (campus[i][j] == 'I')
			{
				x = j;
				y = i;
				
				break;
			}
		}
	}
	
	DFS(x, y);
	
	if (cnt == 0)
	{
		printf("TT");
	}
	else
	{
		printf("%d", cnt);
	}
	
	return 0;
}

void DFS(int x, int y)
{
	if (campus[y][x] == 'P')
	{
		cnt++;
	}
	
	campus[y][x] = 'X';
	
	if (x < m - 1 && campus[y][x + 1] != 'X')
	{
		DFS(x + 1, y);
	}
	if (y < n - 1 && campus[y + 1][x] != 'X')
	{
		DFS(x, y + 1);
	}
	if (x > 0 && campus[y][x - 1] != 'X')
	{
		DFS(x - 1, y);
	}
	if (y > 0 && campus[y - 1][x] != 'X')
	{
		DFS(x, y - 1);
	}
}