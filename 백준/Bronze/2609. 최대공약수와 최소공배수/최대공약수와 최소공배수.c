#include <stdio.h>

#define Max(a, b) (a > b ? a : b)
#define Min(a, b) (a < b ? a : b)

int main(void)
{
	int i;
	int a, b;
	int max;
	int maxCommonDivisor, minCommonMultiple;
	
	scanf("%d %d", &a, &b);
	
	for (i = 1; i <= Max(a, b); i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			maxCommonDivisor = i;
		}
	}
	
	max = Max(a, b);
	minCommonMultiple = Min(a, b);
	
	for (i = 1; max != minCommonMultiple; i++)
	{
		minCommonMultiple += Min(a, b);
		
		if (max < minCommonMultiple)
		{
			max += Max(a, b);
		}
	}
	
	printf("%d\n", maxCommonDivisor);
	printf("%d", minCommonMultiple);
	
	return 0;
}