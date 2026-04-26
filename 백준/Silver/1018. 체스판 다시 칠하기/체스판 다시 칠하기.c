#include <stdio.h>

int main(void)
{
	int x, y, offsetX, offsetY;
	int n, m;
	char board[50][51] = { 0, };
	int result = 64, minResult = 64;
	
	scanf("%d %d", &n, &m);
	
	for (y = 0; y < n; y++)
	{
		scanf("%s", board[y]);
	}
	
	for (offsetY = 0; offsetY <= n - 8; offsetY++)
	{
		for (offsetX = 0; offsetX <= m - 8; offsetX++)
		{
			for (y = 0, result = 64; y < 8; y++)
			{
				for (x = 0; x < 8; x++)
				{
					if (board[y + offsetY][x + offsetX] == ((x + y) % 2 == 0 ? 'W' : 'B'))
					{
						result--;
					}
				}
			}
			
			if (minResult > result)
			{
				minResult = result;
			}
			
			for (y = 0, result = 64; y < 8; y++)
			{
				for (x = 0; x < 8; x++)
				{
					if (board[y + offsetY][x + offsetX] == ((x + y) % 2 == 0 ? 'B' : 'W'))
					{
						result--;
					}
				}
			}
			
			if (minResult > result)
			{
				minResult = result;
			}
		}
	}
	
	printf("%d", minResult);
	
	return 0;
}