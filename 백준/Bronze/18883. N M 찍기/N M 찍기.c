#include <stdio.h>

int main(void)
{
	int i, j;
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	for (i = 1; i <= n * m; i++)
	{
		for (j = 0; j < m - 1; j++)
		{
			printf("%d ", i++);
		}
		
		printf("%d\n", i);
	}
	
	return 0;
}