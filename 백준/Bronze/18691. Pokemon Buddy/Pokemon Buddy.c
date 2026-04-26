#include <stdio.h>

int main(void)
{
	int t;
	int g, c, e;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d %d", &g, &c, &e);
		
		if (e - c <= 0)
		{
			printf("0\n");
			
			continue;
		}
		
		if (g == 1)
		{
			printf("%d\n", e - c);
		}
		else if (g == 2)
		{
			printf("%d\n", (e - c) * 3);
		}
		else if (g == 3)
		{
			printf("%d\n", (e - c) * 5);
		}
	}
	
	return 0;
}