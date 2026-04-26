#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 104730

int main(void)
{
	int i, j;
	int n;
	int* primeArray = (int*)malloc(sizeof(int) * ARRAY_LENGTH);
	
	scanf("%d", &n);
	
	for (i = 2; i < ARRAY_LENGTH; i++)
	{
		primeArray[i] = 1;
	}
	
	for (i = 2; i * i < ARRAY_LENGTH; i++)
	{
		if (primeArray[i])
		{
			for (j = i * i; j < ARRAY_LENGTH; j += i)
			{
				primeArray[j] = 0;
			}
		}
	}
	
	for (i = 2; n > 0; i++)
	{
		if (primeArray[i])
		{
			n--;
		}
	}
	
	free(primeArray);
	printf("%d", i - 1);
	
	return 0;
}