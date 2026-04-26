#include <stdio.h>

int main(void)
{
	int i;
	int x, y, n;
	
	scanf("%d %d %d", &x, &y, &n);
	
	for (i = 1; i <= n; i++)
	{
		if (i % x != 0 && i % y != 0)
		{
			printf("%d\n", i);
			
			continue;
		}
		
		if (i % x == 0)
		{
			printf("Fizz");
		}
		if (i % y == 0)
		{
			printf("Buzz");
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}