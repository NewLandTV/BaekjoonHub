#include <stdio.h>

int main(void)
{
	int x;
	int n;
	int r, c;
	
	scanf("%d", &x);
	scanf("%d", &n);
	
	for (r = c = 0; ;)
	{
		r = x % 3;
		c++;
		
		switch (r)
		{
			case 0:
				x++;
				
				break;
			case 1:
				x *= 2;
				
				break;
			case 2:
				x *= 3;
				
				break;
		}
		
		r = x % 3;
		
		if (x >= n)
		{
			break;
		}
	}
	
	printf("%d", c);
	
	return 0;
}