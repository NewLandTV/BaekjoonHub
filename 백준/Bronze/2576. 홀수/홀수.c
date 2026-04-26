#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int c = 0;
	int numbers[7];
	int sum = 0;
	int min = 100;
	
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		
		if (n & 1)
		{
			numbers[c++] = n;
			sum += n;
			
			if (min > n)
			{
				min = n;
			}
		}
	}
	
	if (sum == 0)
	{
		printf("-1");
		
		return 0;
	}
	
	printf("%d\n", sum);
	printf("%d", min);
	
	return 0;
}