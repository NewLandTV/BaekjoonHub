#include <stdio.h>

int main(void)
{
	int n;
	int x;
	
	while (1)
	{
		x = 0;
		
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		while (n > 0)
		{
			x += n * n;
			n--;
		}
		
		printf("%d\n", x);
	}
	
	return 0;
}