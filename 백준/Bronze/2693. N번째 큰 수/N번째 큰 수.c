#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int t;
	int i;
	int data[10];
	
	for (scanf("%d", &t); t > 0; t--)
	{
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &data[i]);
		}
		
		qsort(data, 10, sizeof(int), Compare);
		printf("%d\n", data[7]);
	}
	
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