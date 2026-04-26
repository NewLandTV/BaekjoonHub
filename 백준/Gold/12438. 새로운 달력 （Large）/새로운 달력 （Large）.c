#include <stdio.h>

#define ll long long

int GCD(int x, int y);

int main(void)
{
	int i;
	int t;
	ll a;
	int b, c;
	ll x;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%lld %d %d", &a, &b, &c);
		
		x = (a * b + c - 1) / c + a - 1 - (a - 1) * GCD(b, c) / c;
		
		printf("Case #%d: %lld\n", i, x);
	}
	
	return 0;
}

int GCD(int x, int y)
{
	int temp;
	
	while (y)
	{
		temp = x;
		x = y;
		y = temp % y;
	}
	
	return x;
}