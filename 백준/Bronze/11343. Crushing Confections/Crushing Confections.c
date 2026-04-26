#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int r, c;
	char grid[100][100];
	int found;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &r, &c);
		
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				scanf(" %c", &grid[i][j]);
			}
		}
		
		for (i = found = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j < c - 2 && grid[i][j] == grid[i][j + 1] && grid[i][j] == grid[i][j + 2])
				{
					printf("%d %d %d %d %d %d\n", i + 1, j + 1, i + 1, j + 2, i + 1, j + 3);
					
					found = 1;
					
					break;
				}
				else if (i < r - 2 && grid[i][j] == grid[i + 1][j] && grid[i][j] == grid[i + 2][j])
				{
					printf("%d %d %d %d %d %d\n", i + 1, j + 1, i + 2, j + 1, i + 3, j + 1);
					
					found = 1;
					
					break;
				}
			}
			
			if (found)
			{
				break;
			}
		}
		
		if (!found)
		{
			printf("no set found\n");
		}
	}
	
	return 0;
}