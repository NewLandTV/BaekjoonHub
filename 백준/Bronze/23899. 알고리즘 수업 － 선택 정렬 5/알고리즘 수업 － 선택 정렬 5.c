#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int a[10000];
	int b[10000];
	int temp;
	int max;
	int maxIndex;
	int equals;
	int result;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for (i = n - 1; i >= 0; i--)
	{
		equals = 1;
		
		for (j = 0; j < n; j++)
		{
			if (a[j] != b[j])
			{
				equals = 0;
				
				break;
			}
		}
		
		if (equals)
		{
			break;
		}
		
		max = 0;
		maxIndex = 0;
		
		for (j = 0; j < i + 1; j++)
		{
			if (max < a[j])
			{
				max = a[j];
				maxIndex = j;
			}
		}
		
		if (a[i] < max)
		{
			temp = a[maxIndex];
			a[maxIndex] = a[i];
			a[i] = temp;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			printf("0");
			
			return 0;
		}
	}
	
	printf("1");
	
	return 0;
}