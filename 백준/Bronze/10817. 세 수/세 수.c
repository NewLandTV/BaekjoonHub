#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int data[3];
	
	scanf("%d %d %d", &data[0], &data[1], &data[2]);
	qsort(data, 3, sizeof(int), Compare);
	printf("%d", data[1]);
	
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