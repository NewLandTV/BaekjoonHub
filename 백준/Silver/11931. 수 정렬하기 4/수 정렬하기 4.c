#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	int* a;
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(int), Compare);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	
	free(a);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	
	if (n1 > n2)
	{
		return -1;
	}
	
	if (n1 < n2)
	{
		return 1;
	}
	
	return 0;
}