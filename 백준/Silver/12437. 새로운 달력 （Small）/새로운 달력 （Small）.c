#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;
	int t;
	int a, b, c;
	int n;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		for (j = n = 0; j < a; j++)
		{
			n += b;
			
			if (n % c != 0 && j != a - 1)
			{
				n += c;
			}
		}
		
		printf("Case #%d: %d\n", i, (int)ceil((double)n / c));
	}
	
	return 0;
}