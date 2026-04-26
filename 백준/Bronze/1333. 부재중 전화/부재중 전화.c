#include <stdio.h>

int main(void)
{
	int i;
	int n, l, d;
	int s, m;
	int k;
	int x;
	
	scanf("%d %d %d", &n, &l, &d);
	
	s = (l + 5);
	m = n * s - 5;
	
	for (i = 1; d * i <= m; i++)
	{
		k = d * i % s;
		
		if (l <= k && k < s)
		{
			printf("%d", d * i);
			
			return 0;
		}
	}
	
	printf("%d", (m / d + 1) * d);
	
	return 0;
}