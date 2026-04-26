#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int a, b;
	int maxCommonDivisor;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d %d", &a, &b);
		
		for (i = 1; i <= a && i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				maxCommonDivisor = i;
			}
		}
		
		printf("%d\n", a * b / maxCommonDivisor);
	}
	
	return 0;
}