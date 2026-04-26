#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int x, y;
	int array[3];
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &array[i]);
	}
	
	qsort(array, 3, sizeof(int), Compare);
	
	x = array[1] - array[0];
	y = array[2] - array[1];
	
	if (x > y)
	{
		printf("%d", y + array[0]);
	}
	else if (x == y)
	{
		printf("%d", x + array[2]);
	}
	else
	{
		printf("%d", x + array[1]);
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