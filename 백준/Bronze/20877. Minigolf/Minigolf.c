#include <stdio.h>

int main(void)
{
	int n;
	int hit;
	int result = 0;
	
	scanf("%d", &n);
	
	while (n)
	{
		scanf("%d", &hit);
		
		if (hit > 7)
		{
			hit = 7;
		}
		
		if (n-- & 1)
		{
			result += hit - 2;
		}
		else
		{
			result += hit - 3;
		}
	}
	
	printf("%d", result);
	
	return 0;
}