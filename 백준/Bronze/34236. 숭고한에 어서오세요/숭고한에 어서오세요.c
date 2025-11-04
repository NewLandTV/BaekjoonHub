#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int prev = 0, gap;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &a);
		
		if (prev == 0)
		{
			prev = a;
			
			continue;
		}
		
		gap = a - prev;
		prev = a;
	}
	
	printf("%d", prev + gap);
	
	return 0;
}