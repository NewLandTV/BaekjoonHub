#include <stdio.h>

int main(void)
{
	int i, j;
	int temp;
	int abcd[4], e, f;
	int sum;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &abcd[i]);
	}
	
	for (i = 1; i < 4; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (abcd[j] < abcd[j + 1])
			{
				temp = abcd[j];
				abcd[j] = abcd[j + 1];
				abcd[j + 1] = temp;
			}
		}
	}
	
	scanf("%d", &e);
	scanf("%d", &f);
	
	sum = abcd[0] + abcd[1] + abcd[2] + (e < f ? f : e);
	
	printf("%d", sum);
	
	return 0;
}