#include <stdio.h>

int main(void)
{
	int i;
	int n;
	unsigned long long f[117] = { 0, 1, 1, 1, 0, };
	
	scanf("%d", &n);
	
	for (i = 4; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 3];
	}
	
	printf("%llu", f[n]);
	
	return 0;
}