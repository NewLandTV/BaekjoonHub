#include <stdio.h>

#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

int main(void)
{
	int i, j;
	int n;
	int map[399][397] = { 0, };
	int cx, cy;
	int direction[4] = { UP, RIGHT, DOWN, LEFT };
	int cw = 3;
	
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("*");
		
		return 0;
	}
	
	cx = (n - 2) * 2 + 2;
	cy = (n - 2) * 2 + 4;
	map[cy][cx] = 1;
	
	for (i = 0; i < n * 4 - 2; i++)
	{
		if (i != 0 && !(i & 1))
		{
			cw += 2;
		}
		
		switch (direction[i % 4])
		{
		case UP:
			for (j = 0; j < cw; j++)
			{
				map[cy--][cx] = 1;
			}
			
			cy++;
			
			break;
		case RIGHT:
			for (j = 0; j < cw; j++)
			{
				map[cy][cx++] = 1;
			}
			
			cx--;
			
			break;
		case DOWN:
			for (j = 0; j < cw; j++)
			{
				map[cy++][cx] = 1;
			}
			
			cy--;
			
			break;
		case LEFT:
			for (j = 0; j < cw; j++)
			{
				map[cy][cx--] = 1;
			}
			
			cx++;
			
			break;
		}
	}
	
	for (i = 0; i < n * 4 - 1; i++)
	{
		if (i == 1)
		{
			printf("*\n");
			
			continue;
		}
		
		for (j = 0; j <= (n - 1) * 4; j++)
		{
			printf("%c", map[i][j] ? '*' : ' ');
		}
		
		printf("\n");
	}
	
	return 0;
}