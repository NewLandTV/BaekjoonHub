#include <stdio.h>

int main(void)
{
	int n;
	int h;
	int p = 0;
	int c = 0;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d", &h);
		
		if (p <= h)
		{
			c++;
		}
		
		p = h;
	}
	
	printf("%d", c);
	
	return 0;
}