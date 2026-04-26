#include <stdio.h>

int main(void)
{
	int money;
	int k;
	int count = 0;
	
	scanf("%d", &money);
	
	k = 1000 - money;
	
	for (count = 0; k > 0; count++)
	{
		if (k >= 500)
		{
			k -= 500;
		}
		else if (k >= 100)
		{
			k -= 100;
		}
		else if (k >= 50)
		{
			k -= 50;
		}
		else if (k >= 10)
		{
			k -= 10;
		}
		else if (k >= 5)
		{
			k -= 5;
		}
		else
		{
			k--;
		}
	}
	
	printf("%d", count);
	
	return 0;
}