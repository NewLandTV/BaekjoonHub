#include <stdio.h>

int main(void)
{
	int n, x;
	int sum = 0;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &x);
		
		sum += x;
	}
	
	printf("%d", sum);
	
	return 0;
}