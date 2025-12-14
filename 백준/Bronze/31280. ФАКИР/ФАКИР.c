#include <stdio.h>

int main(void)
{
	int i;
	int v[4], sum = 0;
	int min = 500;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &v[i]);
		
		if (min > v[i])
		{
			min = v[i];
		}
		
		sum += v[i];
	}
	
	printf("%d", sum - min + 1);
	
	return 0;
}