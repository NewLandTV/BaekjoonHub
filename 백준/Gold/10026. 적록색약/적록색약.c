#include <stdio.h>

int n;
char area[100][101];
int visit[100][100];

int GetColorForRG(char c);
void DFS(int x, int y, int rg);

int main(void)
{
	int i, j;
	int x = 0, y = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", area[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (!visit[i][j])
			{
				DFS(i, j, 0);
				
				x++;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			visit[i][j] = 0;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (!visit[i][j])
			{
				DFS(i, j, 1);
				
				y++;
			}
		}
	}
	
	printf("%d %d", x, y);
	
	return 0;
}

int GetColorForRG(char c)
{
	return c == 'B';
}

void DFS(int x, int y, int rg)
{
	visit[x][y] = 1;
	
	if (!rg)
	{
		if (x > 0 && area[x][y] == area[x - 1][y] && !visit[x - 1][y])
		{
			DFS(x - 1, y, rg);
		}
		if (x < n - 1 && area[x][y] == area[x + 1][y] && !visit[x + 1][y])
		{
			DFS(x + 1, y, rg);
		}
		if (y > 0 && area[x][y] == area[x][y - 1] && !visit[x][y - 1])
		{
			DFS(x, y - 1, rg);
		}
		if (y < n - 1 && area[x][y] == area[x][y + 1] && !visit[x][y + 1])
		{
			DFS(x, y + 1, rg);
		}
		
		return;
	}
	
	int k = GetColorForRG(area[x][y]);
	
	if (x > 0 && k == GetColorForRG(area[x - 1][y]) && !visit[x - 1][y])
	{
		DFS(x - 1, y, rg);
	}
	if (x < n - 1 && k == GetColorForRG(area[x + 1][y]) && !visit[x + 1][y])
	{
		DFS(x + 1, y, rg);
	}
	if (y > 0 && k == GetColorForRG(area[x][y - 1]) && !visit[x][y - 1])
	{
		DFS(x, y - 1, rg);
	}
	if (y < n - 1 && k == GetColorForRG(area[x][y + 1]) && !visit[x][y + 1])
	{
		DFS(x, y + 1, rg);
	}
}