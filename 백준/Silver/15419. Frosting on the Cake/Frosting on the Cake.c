#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int v;
	long long a[3] = { 0, }, b[3] = { 0, }, c[3] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v);
		
		a[(i + 1) % 3] += v;
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v);
		
		b[(i + 1) % 3] += v;
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[(i + j) % 3] += a[i] * b[j];
		}
	}
	
	printf("%lld %lld %lld", c[0], c[1], c[2]);
	
	return 0;
}