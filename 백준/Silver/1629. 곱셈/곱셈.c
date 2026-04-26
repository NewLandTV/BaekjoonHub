#include <stdio.h>

int PowModular(int a, int b, int c);

int main(void)
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", PowModular(a, b, c));
	
	return 0;
}

int PowModular(int a, int b, int c)
{
	long long result;
	
	a %= c;
	
	if (b <= 1)
	{
		return a;
	}
	
	result = PowModular(a, b >> 1, c);
	
	if (b & 1)
	{
		return result * result % c * a % c;
	}
	
	return result * result % c;
}