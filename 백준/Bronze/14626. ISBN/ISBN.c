#include <stdio.h>

int main(void)
{
	int i;
	char isbn[14];
	int weight;
	int xWeight;
	int sum = 0;
	
	scanf("%s", isbn);
	
	for (i = 0; i < 13; i++)
	{
		weight = i & 1 ? 3 : 1;
		
		if (isbn[i] == '*')
		{
			xWeight = weight;
			
			continue;
		}
		
		sum += (isbn[i] - '0') * weight;
	}
	
	for (i = 0; i < 10; i++)
	{
		if ((sum + i * xWeight) % 10 == 0)
		{
			printf("%d", i);
			
			return 0;
		}
	}
	
	return 0;
}