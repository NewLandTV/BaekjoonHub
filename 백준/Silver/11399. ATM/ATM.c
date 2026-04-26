#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i, j;
	int n;
	int p[1000];
	int sum = 0;
	int result = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	
	qsort(p, n, sizeof(int), Compare);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			sum += p[j];
		}
		
		result += sum;
		sum = 0;
	}
	
	printf("%d", result);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	
	if (n1 == n2)
	{
		return 0;
	}
	
	return n1 > n2 ? 1 : -1;
}