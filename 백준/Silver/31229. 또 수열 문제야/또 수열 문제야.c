#include <stdio.h>

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i * 2 - 1);
	}
	
	return 0;
}