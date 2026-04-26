#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define MOD 1000000000

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int i;
	int n;
	int* fibo;
	
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("1\n");
		printf("1");
		
		return 0;
	}
	
	fibo = (int*)malloc(sizeof(int) * (Abs(n) + 1));
	
	memset(fibo, 0, sizeof(fibo));
	
	fibo[0] = 0;
	fibo[1] = 1;
	
	if (n > 1)
	{
		for (i = 2; i <= n; i++)
		{
			fibo[i] = fibo[i - 1] + fibo[i - 2];
			fibo[i] %= MOD;
		}
	}
	else
	{
		n = -n;
		
		for (i = 2; i <= n; i++)
		{
			fibo[i] = fibo[i - 2] - fibo[i - 1];
			fibo[i] %= MOD;
		}
	}
	
	if (fibo[n] == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", fibo[n] > 0 ? 1 : -1);
	}
	
	printf("%d", Abs(fibo[n]));
	free(fibo);
	
	return 0;
}