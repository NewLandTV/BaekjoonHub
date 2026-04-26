#include <stdio.h>

int main(void)
{
	long long i, sum = 0;
	int n;
	
	scanf("%d", &n);
	
	for (i = 1; i < n; i++)
	{
		sum += n * i + i;
	}
	
	printf("%lld", sum);
	
	return 0;
}