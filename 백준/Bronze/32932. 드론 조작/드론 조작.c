#include <stdio.h>

#define MAP_SIZE 1001
#define HALF_MAP_SIZE (MAP_SIZE >> 1)

int main(void)
{
	int i;
	int n, k;
	int x, y;
	int map[MAP_SIZE][MAP_SIZE] = { 0, };
	char command[501];
	int dx = 0, dy = 0;
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		
		map[x + HALF_MAP_SIZE][y + HALF_MAP_SIZE] = 1;
	}
	
	scanf("%s", command);
	
	for (i = 0; i < k; i++)
	{
		switch (command[i])
		{
			case 'U':
				if (map[dx + HALF_MAP_SIZE][dy + (MAP_SIZE >> 1) + 1] == 0)
				{
					dy++;
				}
				
				break;
			case 'D':
				if (map[dx + HALF_MAP_SIZE][dy + (MAP_SIZE >> 1) - 1] == 0)
				{
					dy--;
				}
				
				break;
			case 'R':
				if (map[dx + HALF_MAP_SIZE + 1][dy + (MAP_SIZE >> 1)] == 0)
				{
					dx++;
				}
				
				break;
			case 'L':
				if (map[dx + HALF_MAP_SIZE - 1][dy + (MAP_SIZE >> 1)] == 0)
				{
					dx--;
				}
				
				break;
		}
	}
	
	printf("%d %d", dx, dy);
	
	return 0;
}