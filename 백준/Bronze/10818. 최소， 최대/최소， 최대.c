#include <stdio.h>

int main(void)
{
	int n, i, input;
	int min = 1000001;
	int max = -1000001;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &input);
		
		if (input > max)
		{
			max = input;
		}
		if (input < min)
		{
			min = input;
		}
	}
	
	printf("%d %d", min, max);
	
	return 0;
}