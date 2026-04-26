#include <stdio.h>

int main(void)
{
	int t;
	int n, m;
	int a, b, c;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &n, &m);
		
		for (a = 1, c = 0; a < n; a++)
		{
			for (b = a + 1; b < n; b++)
			{
				if ((a * a + b * b + m) % (a * b) == 0)
				{
					c++;
				}
			}
		}
		
		printf("%d\n", c);
	}
	
	return 0;
}