#include <stdio.h>

int main(void)
{
	int i, j;
	int temp;
	int input[5];
	int sum;
	
	for (i = 0, sum = 0; i < 5; sum += input[i++])
	{
		scanf("%d", &input[i]);
	}
	
	for (i = 4; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (input[j] < input[j + 1])
			{
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
	
	printf("%d\n", sum / 5);
	printf("%d", input[2]);
	
	return 0;
}