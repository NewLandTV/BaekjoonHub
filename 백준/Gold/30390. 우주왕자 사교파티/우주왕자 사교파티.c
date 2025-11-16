#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long i;
	long long a, b, k;
	long long max = 0;
	long long n = 0;
	long long* d = (long long*)calloc(141421, sizeof(long long));
	
	scanf("%lld %lld %lld", &a, &b, &k);
	
	for (i = 1; i * i <= a + b; i++)
	{
		if (i * i == a + b)
		{
			d[n++] = i;
			
			continue;
		}
		
		if ((a + b) % i != 0)
		{
			continue;
		}
		
		d[n++] = i;
		d[n++] = (a + b) / i;
	}
	
	for (i = 0; i < n; i++)
	{
		if (max < d[i] && (a % d[i] <= k || b % d[i] <= k))
		{
			max = d[i];
		}
	}
	
	free(d);
	printf("%lld", max);
	
	return 0;
}