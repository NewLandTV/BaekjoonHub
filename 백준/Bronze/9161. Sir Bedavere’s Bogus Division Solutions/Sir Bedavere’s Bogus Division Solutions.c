#include <stdio.h>

int main(void)
{
	int i, j;
	int a, b;
	
	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			if (i % 111 == 0 && j % 111 == 0)
			{
				continue;
			}
			
			a = i / 10;
			b = j % 100;
			
			if (a * j == b * i && i % 10 == j / 100)
			{
				printf("%d / %d = %d / %d\n", i, j, a, b);
			}
		}
	}
	
	return 0;
}