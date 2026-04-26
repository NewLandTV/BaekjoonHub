#include <stdio.h>

int main(void)
{
	int a, b, h;
	int k, c;
	
	scanf("%d %d %d", &a, &b, &h);
	
	for (k = c = 0; ; k -= b)
	{
		k += a;
		c++;
		
		if (k >= h)
		{
			break;
		}
	}
	
	printf("%d", c);
	
	return 0;
}