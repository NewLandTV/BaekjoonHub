#include <stdio.h>

int GreatestCommonDivisor(int a, int b);

int main(void)
{
	int t;
	int a, b;
	int lcm, gcd;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d %d", &a, &b);
		
		gcd = GreatestCommonDivisor(a, b);
		lcm = a * b / gcd;
		
		printf("%d %d\n", lcm, gcd);
	}
	
	return 0;
}

int GreatestCommonDivisor(int a, int b)
{
	return b == 0 ? a : GreatestCommonDivisor(b, a % b);
}