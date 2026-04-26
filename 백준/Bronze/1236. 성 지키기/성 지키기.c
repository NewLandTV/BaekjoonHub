#include <stdio.h>

int main(void)
{
	int i, j;
	int n, m;
	char map[50][51];
	int x, y;
	int row[50] = { 0, }, col[50] = { 0, }, c = 0;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", map[i]);
		
		for (j = 0; j < m; j++)
		{
			if (map[i][j] == 'X')
			{
				row[j] = col[i] = 1;
			}
		}
	}
	
	for (i = x = 0; i < m; i++)
	{
		if (!row[i])
		{
			x++;
		}
	}
	
	for (i = y = 0; i < n; i++)
	{
		if (!col[i])
		{
			y++;
		}
	}
	
	printf("%d", x > y ? x : y);
	
	return 0;
}