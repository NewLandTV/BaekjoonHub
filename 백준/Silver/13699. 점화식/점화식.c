#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	long long t[36] = { 1, 0 };
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			t[i] += t[j] * t[i - j - 1];
		}
	}
	
	printf("%lld", t[n]);
	
	return 0;
}