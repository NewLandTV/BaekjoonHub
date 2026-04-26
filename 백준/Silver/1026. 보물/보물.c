#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	int a[50], b[50];
	int result = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	
	qsort(a, n, sizeof(int), Compare);
	qsort(b, n, sizeof(int), Compare);
	
	for (i = 0; i < n; i++)
	{
		result += a[i] * b[n - i - 1];
	}
	
	printf("%d\n", result);
	
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