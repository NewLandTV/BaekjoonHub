#include <stdio.h>

int main(void)
{
	int n;
	int bagCount;
	
	scanf("%d", &n);
	
	if (n % 5 == 0)
	{
		printf("%d", n / 5);
		
		return 0;
	}
	
	for (bagCount = 0; n % 5 != 0; n -= 3, bagCount++)
	{
		if (n < 0)
		{
			bagCount = -1;
			
			break;
		}
	}
	
	printf("%d", bagCount + n / 5);
	
	return 0;
}