#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		printf("Case #%d: ", i);
		
		if (n <= 25)
		{
			printf("World Finals\n");
			
			continue;
		}
		if (n <= 1000)
		{
			printf("Round 3\n");
			
			continue;
		}
		if (n <= 4500)
		{
			printf("Round 2\n");
			
			continue;
		}
		if (n > 25)
		{
			printf("Round 1\n");
		}
	}
	
	return 0;
}