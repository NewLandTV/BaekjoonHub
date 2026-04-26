#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int k;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &k);
		
		for (i = 0; i < k; i++)
		{
			putchar('=');
		}
		
		putchar('\n');
	}
	
	return 0;
}