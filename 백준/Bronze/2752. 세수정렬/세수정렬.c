#include <stdio.h>

int main(void)
{
	int i, j;
	int temp;
	int data[3];
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &data[i]);
	}
	
	for (i = 2; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%d ", data[i]);
	}
	
	return 0;
}