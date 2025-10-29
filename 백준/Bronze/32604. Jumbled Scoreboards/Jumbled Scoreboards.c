#include <stdio.h>

int main(void)
{
	int n;
	int prevA = -1, prevB = -1;
	int a, b;
	int yes = 1;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a, &b);
		
		if (prevA > a || prevB > b)
		{
			printf("no");
			
			return 0;
		}
		
		prevA = a;
		prevB = b;
	}
	
	printf("yes");
	
	return 0;
}