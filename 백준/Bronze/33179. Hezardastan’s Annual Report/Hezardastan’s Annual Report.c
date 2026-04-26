#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int count = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &a);
		
		if (a & 1)
		{
			a++;
		}
		
		while (a > 0)
		{
			a -= 2;
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}