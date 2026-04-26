#include <stdio.h>
#include <memory.h>

void IsPrime(int start, int end);

int main(void)
{
	int m, n;
	
	scanf("%d %d", &m, &n);
	IsPrime(m, n);
	
	return 0;
}

void IsPrime(int start, int end)
{
	int i, j;
	int* primeArray = (int*)malloc(sizeof(int) * (end + 1));
	
	for (i = 0; i <= end; i++)
	{
		primeArray[i] = 1;
	}
	
	primeArray[1] = 0;
	
	for (i = 2; i * i <= end; i++)
	{
		if (primeArray[i])
		{
			for (j = i * i; j <= end; j += i)
			{
				primeArray[j] = 0;
			}
		}
	}
	
	for (i = start; i <= end; i++)
	{
		if (primeArray[i])
		{
			printf("%d\n", i);
		}
	}
	
	free(primeArray);
}