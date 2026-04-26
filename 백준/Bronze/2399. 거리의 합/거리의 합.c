#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int i, j;
	int n;
	int x[10000];
	long long sum = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += Abs(x[i] - x[j]);
		}
	}
	
	printf("%lld", sum);
	
	return 0;
}