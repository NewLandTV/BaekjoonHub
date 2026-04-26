#include <stdio.h>

#define ll long long

ll dp[61];

ll F(ll x);

int main(void)
{
	int i, l;
	ll k;
	ll a, b;
	
	dp[0] = 1;
	
	for (i = 0, l = k = 1; i < 60; i++, l++, k <<= 1)
	{
		dp[l] = dp[l - 1] + k << 1;
	}
	
	scanf("%lld %lld", &a, &b);
	printf("%lld", F(b) - F(a - 1));
	
	return 0;
}

ll F(ll x)
{
	if (x <= 1)
	{
		return x;
	}
	
	ll i;
	int c;
	
	for (i = 2, c = 0; i << 1 <= x; i <<= 1, c++);
	
	return F(x - i) + x + dp[c] - i + 1;
}