#include <stdio.h>

int main(void)
{
	int n;
	int x, p = 0;
	int sum = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &x);
		
		if (x == p + 1)
		{
			p = x;
			
			continue;
		}
		
		sum += x;
		p = x;
	}
	
	printf("%d", sum);
	
	return 0;
}