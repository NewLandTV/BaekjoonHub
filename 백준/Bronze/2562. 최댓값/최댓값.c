#include <stdio.h>

int main(void)
{
	int data[9];
	int i, count, max = -1000001;
	
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &data[i]);
		
		if (data[i] > max)
		{
			max = data[i];
			count = i + 1;
		}
	}
	
	printf("%d\n%d", max, count);
	
	return 0;
}