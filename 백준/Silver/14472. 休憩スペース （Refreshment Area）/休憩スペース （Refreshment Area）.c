#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n, m, d;
	char space[100][101];
	int c = 0;
	
	scanf("%d %d %d", &n, &m, &d);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", space[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			for (k = 0; k < d && i + k < n; k++)
			{
				if (space[i + k][j] == '#')
				{
					break;
				}
			}
			
			if (k == d)
			{
				c++;
			}
			
			for (k = 0; k < d && j + k < m; k++)
			{
				if (space[i][j + k] == '#')
				{
					break;
				}
			}
			
			if (k == d)
			{
				c++;
			}
		}
	}
	
	printf("%d", c);
	
	return 0;
}