#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i, j;
	int bears[3];
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &bears[i]);
	}
	
	qsort(bears, 3, sizeof(int), Compare);
	printf("%d", bears[1]);
	
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