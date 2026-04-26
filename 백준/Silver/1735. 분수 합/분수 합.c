#include <stdio.h>

int GreatestCommonDivisor(int a, int b);

int main(void)
{
	int a, b;
	int c, d;
	int numerator, denominator;
	int gcd;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	numerator = a * d + b * c;
	denominator = b * d;
	gcd = GreatestCommonDivisor(numerator, denominator);
	
	printf("%d %d", numerator / gcd, denominator / gcd);
	
	return 0;
}

int GreatestCommonDivisor(int a, int b)
{
	return b ? GreatestCommonDivisor(b, a % b) : a;
}