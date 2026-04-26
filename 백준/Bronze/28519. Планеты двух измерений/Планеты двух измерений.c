#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n, m, temp;
	int count = 0;
	
	scanf("%d %d", &n, &m);
	
	if (n > m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	
	count = Min(n + m, n * 2 + 1);
	
	printf("%d", count);
	
	return 0;
}