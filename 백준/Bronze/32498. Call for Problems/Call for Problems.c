#include <stdio.h>

int main(void)
{
	int n;
	int d;
	int c = 0;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d", &d);
		
		if (d & 1)
		{
			c++;
		}
	}
	
	printf("%d", c);
	
	return 0;
}