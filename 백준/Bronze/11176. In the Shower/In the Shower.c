#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int e, n;
	int s;
	int c;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &e, &n);
		
		for (c = j = 0; j < n; j++)
		{
			scanf("%d", &s);
			
			if (s > e)
			{
				c++;
			}
		}
		
		printf("%d\n", c);
	}
	
	return 0;
}