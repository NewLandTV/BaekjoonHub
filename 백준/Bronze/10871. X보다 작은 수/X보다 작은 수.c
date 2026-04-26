#include <stdio.h>

int main(void)
{
	int n, x, a, i;
	
	scanf("%d %d", &n, &x);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		if (a < x)
		{
			printf("%d ", a);
		}
	}
	
	return 0;
}