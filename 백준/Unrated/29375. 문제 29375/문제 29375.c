#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	int a[200000];
	double result;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	if (n == 1)
	{
		printf("%d", a[0]);
		
		return 0;
	}
	
	qsort(a, n, sizeof(int), Compare);
	
	for (i = 2, result = (a[0] + a[1]) * 0.5; i < n; i++)
	{
		result = (result + a[i]) * 0.5;
	}
	
	printf("%.9lf", result);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}