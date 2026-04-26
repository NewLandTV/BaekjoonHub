#include <stdio.h>

#define MOD 1000000007

int main(void)
{
	int n;
	int x, y, a = 2, b = 3;
	
	scanf("%d", &n);
	
	y = n - 2;
	
	while (--n > 3)
	{
		x = (a % MOD + b % MOD) % MOD;
		a = b % MOD;
		b = x % MOD;
	}
	
	printf("%d %d", x, y);
	
	return 0;
}