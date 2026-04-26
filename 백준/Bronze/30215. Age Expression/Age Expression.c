#include <stdio.h>

int main(void)
{
	int o, n, m;
	int a, k;
	
	scanf("%d %d %d", &o, &n, &m);
	
	for (a = 1; a <= o; a++)
	{
		for (k = 1; k <= o; k++)
		{
			if (a * n + k * m == o)
			{
				printf("1");
				
				return 0;
			}
		}
	}
	
	printf("0");
	
	return 0;
}