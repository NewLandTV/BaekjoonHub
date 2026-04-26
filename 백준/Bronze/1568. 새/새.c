#include <stdio.h>

int main(void)
{
	int n;
	int k;
	int c = 0;
	
	scanf("%d", &n);
	
	for (k = 1; n > 0; n -= k++, c++)
	{
		if (n < k)
		{
			k = 1;
		}
	}
	
	printf("%d", c);
	
	return 0;
}