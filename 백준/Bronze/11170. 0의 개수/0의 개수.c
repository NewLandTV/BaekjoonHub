#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n, m;
	int x;
	int count;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d", &n, &m);
		
		count = 0;
		
		for (i = n; i <= m; i++)
		{
			if (i == 0)
			{
				count++;
				
				continue;
			}
			
			for (x = i; x > 0; x /= 10)
			{
				if (x % 10 == 0)
				{
					count++;
				}
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}