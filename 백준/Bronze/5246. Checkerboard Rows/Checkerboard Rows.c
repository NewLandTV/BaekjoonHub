#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j;
	int t;
	int n;
	int board[8][8];
	int x, y;
	int sum, max;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				board[i][j] = 0;
			}
		}
		
		for (i = 0; i < n; i++)
		{
			scanf("%d %d", &x, &y);
			
			board[x - 1][y - 1] = 1;
		}
		
		max = 0;
		
		for (i = 0; i < 8; i++)
		{
			sum = 0;
			
			for (j = 0; j < 8; j++)
			{
				if (board[j][i] == 1)
				{
					sum++;
				}
			}
			
			max = Max(max, sum);
		}
		
		printf("%d\n", max);
	}
	
	return 0;
}