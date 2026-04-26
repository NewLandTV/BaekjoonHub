#include <stdio.h>

int main(void)
{
	int t;
	int h, w, n;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d %d", &h, &w, &n);
		printf("%d\n", n % h == 0 ? h * 100 + n / h : n % h * 100 + n / h + 1);
	}
	
	return 0;
}