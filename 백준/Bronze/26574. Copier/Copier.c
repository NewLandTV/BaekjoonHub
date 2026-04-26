#include <stdio.h>

int main(void)
{
	int n;
	int x;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &x);
		printf("%d %d\n", x, x);
	}
	
	return 0;
}