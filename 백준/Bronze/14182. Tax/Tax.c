#include <stdio.h>

int main(void)
{
	int n;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		if (n <= 1000000)
		{
			printf("%d\n", n);
		}
		else if (n <= 5000000)
		{
			printf("%d\n", (int)(n - n * 0.1f));
		}
		else
		{
			printf("%d\n", (int)(n - n * 0.2f));
		}
	}
	
	return 0;
}