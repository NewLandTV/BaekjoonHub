#include <stdio.h>

int main(void)
{
	int i, j, k = 0;
	int n;
	int a[10000], b[10000];
	int year;
	
	scanf("%d", &n);
	
	for (i = 2; i < 10000; i++)
	{
		a[i] = i;
	}
	
	for (i = 2; i < 10000; i++)
	{
		for (j = i * i; j < 10000; j += i)
		{
			a[j] = 0;
		}
	}
	
	for (i = 2; i < 10000; i++)
	{
		if (a[i] == 0)
		{
			continue;
		}
		
		b[k++] = a[i];
	}
	
	for (i = 0; i < k - 1; i++)
	{
		year = b[i] * b[i + 1];
		
		if (year > n)
		{
			printf("%d", year);
			
			return 0;
		}
	}
	
	return 0;
}