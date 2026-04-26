#include <stdio.h>

int main(void)
{
	int x;
	int i, right = 1, max = 2;
	int numerator = 1;
	int denominator = 1;
	
	scanf("%d", &x);
	
	for (i = 1; i < x; i++)
	{
		if (right)
		{
			if (numerator > 1)
			{
				numerator--;
			}
			
			denominator++;
			
			if (denominator >= max)
			{
				right = 0;
				max++;
			}
			
			continue;
		}
		
		if (denominator > 1)
		{
			denominator--;
		}
		
		numerator++;
		
		if (numerator >= max)
		{
			right = 1;
			max++;
		}
	}
	
	printf("%d/%d", numerator, denominator);
	
	return 0;
}