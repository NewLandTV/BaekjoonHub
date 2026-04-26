#include <stdio.h>

int main(void)
{
	int i;
	int a;
	int sum;
	
	for (i = sum = 0; i < 10; i++)
	{
		scanf("%d", &a);
		
		sum += a;
		
		if (sum >= 100)
		{
			if (sum * 2 - a - 200 > 0)
			{
				sum -= a;
			}
			
			break;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}