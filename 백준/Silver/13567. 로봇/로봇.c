#include <stdio.h>

int main(void)
{
	int m, n;
	char cmd[5];
	int value;
	int dir = 0;
	int rx = 0, ry = 0;
	
	scanf("%d %d", &m, &n);
	
	while (n--)
	{
		scanf("%s %d", cmd, &value);
		
		switch (cmd[0])
		{
			case 'T':
				if (value == 0)
				{
					dir = (dir + 1) % 4;
					
					break;
				}
				
				if (dir - 1 < 0)
				{
					dir = 4;
				}
				
				dir--;
				
				break;
			case 'M':
				switch (dir)
				{
					case 0:
						rx += value;
						
						break;
					case 1:
						ry += value;
						
						break;
					case 2:
						rx -= value;
						
						break;
					case 3:
						ry -= value;
						
						break;
				}
				
				break;
		}
		
		if (rx < 0 || rx > m || ry < 0 || ry > m)
		{
			printf("-1");
			
			return 0;
		}
	}
	
	printf("%d %d", rx, ry);
	
	return 0;
}