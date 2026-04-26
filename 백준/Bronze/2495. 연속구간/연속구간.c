#include <stdio.h>

#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int i, j;
	char n[9];
	int count, maxCount;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%s", n);
		
		count = 1;
		maxCount = 1;
		
		for (j = 0; j < 8; j++)
		{
			if (n[j] != n[j + 1])
			{
				maxCount = Max(count, maxCount);
				count = 1;
				
				continue;
			}
			
			count++;
		}
		
		printf("%d\n", maxCount);
	}
	
	return 0;
}