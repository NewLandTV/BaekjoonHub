#include <stdio.h>

int main(void)
{
	int a, b;
	int count;
	
	scanf("%d %d", &a, &b);
	
	for (count = 1; a != b; count++)
	{
		if (a > b)
		{
			count = -1;
			
			break;
		}
		
		if (!(b & 1))
		{
			b >>= 1;
			
			continue;
		}
		
		if (b % 10 != 1)
		{
			count = -1;
			
			break;
		}
		
		b /= 10;
	}
	
	printf("%d", count);
	
	return 0;
}