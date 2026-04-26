#include <stdio.h>

#define MOD 10007

int main(void)
{
	int i;
	int n;
	int fibo[1001] = { 0, 1, 2, };
	
	scanf("%d", &n);
	
	for (i = 3; i <= n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		fibo[i] %= MOD;
	}
	
	printf("%d", fibo[n] % MOD);
	
	return 0;
}