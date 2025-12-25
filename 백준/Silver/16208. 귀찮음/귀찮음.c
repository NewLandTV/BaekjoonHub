#include <stdio.h>
#include <stdlib.h>

int Compare(const int* a, const int* b)
{
	return *a - *b;
}

int main(void)
{
	int i;
	int n;
	int a[500001];
	int total = 0, result = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		
		total += a[i];
	}
	
	qsort(a, n, sizeof(int), Compare);
	
	for (i = 0; i < n; i++)
	{
		result += a[i] * (total - a[i]);
		total -= a[i];
	}
	
	printf("%d", result);
	
	return 0;
}