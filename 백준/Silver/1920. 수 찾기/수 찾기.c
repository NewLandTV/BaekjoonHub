#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n, m;
	int a[100000], b;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(int), Compare);
	scanf("%d", &m);
	
	for (i = 0; i < m; i++)
	{
		scanf("%d", &b);
		printf("%d\n", bsearch(&b, a, n, sizeof(int), Compare) ? 1 : 0);
	}
	
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
	else if (n1 < n2)
	{
		return -1;
	}
	
	return 0;
}