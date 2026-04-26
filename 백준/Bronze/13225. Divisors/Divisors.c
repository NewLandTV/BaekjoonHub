#include <stdio.h>

int main(void)
{
	int i, j;
	int c;
	int n;
	int count;
	
	scanf("%d", &c);
	
	for (i = 0; i < c; i++)
	{
		scanf("%d", &n);
		
		count = 0;
		
		for (j = 1; j * j < n; j++)
		{
			if (n % j == 0)
			{
				count += 2;
			}
		}
		
		if (j * j == n)
		{
			count++;
		}
		
		printf("%d %d\n", n, count);
	}
	
	return 0;
}