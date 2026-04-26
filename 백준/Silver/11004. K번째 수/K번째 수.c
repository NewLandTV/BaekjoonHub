#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n, k;
	int* a;
	
	scanf("%d %d", &n, &k);
	
	a = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(int), Compare);
	printf("%d", a[k - 1]);
	free(a);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	
	if (n1 > n2)
	{
		return 1;
	}
	
	if (n1 < n2)
	{
		return -1;
	}
	
	return 0;
}