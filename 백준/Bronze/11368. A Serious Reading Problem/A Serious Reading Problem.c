#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int c, w, l, p;
	
	while (1)
	{
		scanf("%u %u %u %u", &c, &w, &l, &p);
		
		if (c == 0 && w == 0 && l == 0 && p == 0)
		{
			break;
		}
		
		c = pow(c, w);
		c = pow(c, l);
		c = pow(c, p);
		
		printf("%u\n", c);
	}
	
	return 0;
}