#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int x;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		printf("%d is %s\n", x, x & 1 ? "odd" : "even");
	}
	
	return 0;
}