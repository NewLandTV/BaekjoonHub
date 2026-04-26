#include <stdio.h>

int main(void)
{
	int i;
	int n, m;
	int count = 0;
	
	scanf("%d", &n);
	
	m = ~n + 1;
	
	for (i = 0; i < 32; i++, n >>= 1, m >>= 1)
	{
		count += (n & 1) != (m & 1);
	}
	
	printf("%d", count);
	
	return 0;
}