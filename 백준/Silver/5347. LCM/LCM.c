#include <stdio.h>

#define ll long long

ll GCD(ll a, ll b);

int main(void)
{
	int n;
	ll a, b;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", a * b / GCD(a, b));
	}
	
	return 0;
}

ll GCD(ll a, ll b)
{
	ll temp;
	
	while (b)
	{
		temp = a;
		a = b;
		b = temp % b;
	}
	
	return a;
}