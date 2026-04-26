#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	char x[4];
	int sx;
	char screen[10][21];
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
			screen[i][j] = '.';
		}
		
		screen[i][20] = 0;
	}
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", &x);
		
		if (x[2] != 0)
		{
			sx = (x[1] - '0') * 10 + x[2] - '0';
		}
		else
		{
			sx = x[1] - '0';
		}
		
		screen[x[0] - 65][sx - 1] = 'o';
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%s\n", screen[i]);
	}
	
	return 0;
}