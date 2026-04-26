#include <stdio.h>

#define MOD 1000000007

int a[1000000];
int b[1000000];

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	
	a[0] = 2;
	b[0] = 1;
	
	for (i = 1; i < n; i++)
	{
		a[i] = ((a[i - 1] << 1) % MOD + (b[i - 1] << 1) % MOD) % MOD;
		b[i] = a[i - 1];
	}
	
	printf("%d", (a[n - 1] + b[n - 1]) % MOD);
	
	return 0;
}