#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	int a[50];
	
	scanf("%d", &n);
	
	if (n == 1)
	{
		scanf("%d", &a[0]);
		printf("%d", a[0] * a[0]);
		
		return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(int), Compare);
	printf("%d", a[0] * a[n - 1]);
	
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