#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i, j;
	int n, k;
	int f, c[1000];
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < k; i++)
	{
		scanf("%d", &f);
		
		for (j = 0; j < f; j++)
		{
			scanf("%d", &c[j]);
		}
		
		qsort(c, f, sizeof(int), Compare);
		
		for (j = 0; j < f; j++)
		{
			printf("%d ", c[j] + j + 1);
		}
		
		printf("\n");
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}