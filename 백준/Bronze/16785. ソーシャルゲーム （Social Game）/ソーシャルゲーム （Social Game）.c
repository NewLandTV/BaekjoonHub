#include <stdio.h>

int main(void)
{
	int a, b, c;
	int count = 0, total = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	while (total < c)
	{
		total += a;
		
		if (++count % 7 == 0)
		{
			total += b;
		}
	}
	
	printf("%d", count);
	
	return 0;
}