#include <stdio.h>

#define ll long long

ll GCD(ll a, ll b);
ll ExGCD(ll a, ll b, ll c, ll d);
ll Inverse(ll a, ll b);

int main(void)
{
	ll n, a;
	
	scanf("%lld %lld", &n, &a);
	printf("%lld %lld", n - a, GCD(n, a) == 1 ? Inverse(n, a) : -1);
	
	return 0;
}

ll GCD(ll a, ll b)
{
	ll n;
	
	while (b)
	{
		n = a % b;
		a = b;
		b = n;
	}
	
	return a;
}

ll ExGCD(ll a, ll b, ll c, ll d)
{
	if (a == 1)
	{
		return c;
	}
	
	return ExGCD(b, a % b, d, c - d * (a / b));
}

ll Inverse(ll a, ll b)
{
	ll x = ExGCD(a, b, 0, 1);
	
	if (x < 0)
	{
		x += a;
	}
	
	return x;
}