#include <stdio.h>

int main(void)
{
	int i;
	int a[5];
	int result = 100;
	int c;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		
		if (result > a[i])
		{
			result = a[i];
		}
	}
	
	for (; ; result++)
	{
		c = 0;
		
		for (i = 0; i < 5; i++)
		{
			if (result % a[i] == 0)
			{
				c++;
			}
		}
		
		if (c >= 3)
		{
			break;
		}
	}
	
	printf("%d", result);
	
	return 0;
}