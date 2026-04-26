#include <stdio.h>

int main(void)
{
	int n;
	int x;
	
	scanf("%d", &n);
	
	while (1)
	{
		scanf("%d", &x);
		
		if (x == 0)
		{
			break;
		}
		
		if (x % n != 0)
		{
			printf("%d is NOT a multiple of %d.\n", x, n);
			
			continue;
		}
		
		printf("%d is a multiple of %d.\n", x, n);
	}
	
	return 0;
}