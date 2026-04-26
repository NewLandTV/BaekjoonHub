#include <stdio.h>

#define ll long long

ll x, y, z;

int F(ll n);

int main(void)
{
	ll l, r, m;
	
	scanf("%lld %lld", &x, &y);
	
	z = y * 100ll / x;
	
	if (z >= 99)
	{
		printf("-1");
		
		return 0;
	}
	
	for (l = 0, r = 1000000000; l + 1 < r;)
	{
		m = l + r >> 1;
		F(m) ? (r = m) : (l = m);
	}
	
	printf("%lld", r);
	
	return 0;
}

int F(ll n)
{
	ll zn = (y + n) * 100ll / (x + n);
	
	return zn > z;
}