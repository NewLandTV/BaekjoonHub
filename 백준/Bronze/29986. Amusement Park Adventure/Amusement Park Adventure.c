#include <stdio.h>

int main(void)
{
	int n, h;
	int a;
	int count = 0;
	
	scanf("%d %d", &n, &h);
	
	while (n--)
	{
		scanf("%d", &a);
		
		if (h >= a)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}