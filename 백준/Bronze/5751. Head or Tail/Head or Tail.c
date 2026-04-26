#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int r;
	int won;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (won = i = 0; i < n; i++)
		{
			scanf("%d", &r);
			
			if (r == 1)
			{
				won++;
			}
		}
		
		printf("Mary won %d times and John won %d times\n", n - won, won);
	}
	
	return 0;
}