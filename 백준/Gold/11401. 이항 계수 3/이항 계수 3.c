#include <stdio.h>

#define llu unsigned long long
#define MOD 1000000007
#define Inverse(n, mod) Pow(n, mod - 2, mod)

llu f[4000001];

llu Combination(int n, int r);
llu Pow(llu base, int exp, int mod);

int main(void)
{
	int i;
	int n, r;
	
	scanf("%d %d", &n, &r);
	
	for (f[0] = i = 1; i <= n; i++)
	{	
		f[i] = f[i - 1] * i % MOD;
	}
	
	printf("%llu", Combination(n, r));
	
	return 0;
}

llu Combination(int n, int r)
{
	if (r == 0 || n == r)
	{
		return 1;
	}
	
	if (r == 1)
	{
		return n;
	}
	
	long long k = f[r] * f[n - r] % MOD;
	
	return f[n] * Inverse(k, MOD) % MOD;
}

llu Pow(llu base, int exp, int mod)
{
	llu x = 1;
	
	for (; exp; exp >>= 1, base = base * base % mod)
	{
		if (exp & 1)
		{
			x = x * base % mod;
		}
	}
	
	return x;
}