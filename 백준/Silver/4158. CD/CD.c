#include <stdio.h>

#define MAX_LEN 1000000

int n;
int x[MAX_LEN], y[MAX_LEN];
int count;

void BinarySearch(int* array, int target, int start, int end);

int main(void)
{
	int i;
	int m;
	int v;
	
	while (1)
	{
		scanf("%d %d", &n, &m);
		
		if (n == 0 && m == 0)
		{
			break;
		}
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &v);
			
			x[i] = v;
		}
		
		for (i = 0; i < m; i++)
		{
			scanf("%d", &v);
			
			y[i] = v;
		}
		
		for (i = count = 0; i < m; i++)
		{
			BinarySearch(x, y[i], 0, n - 1);
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}

void BinarySearch(int* array, int target, int start, int end)
{
	if (start > end || n <= end)
	{
		return;
	}
	
	int mid = start + end >> 1;
	
	if (target == array[mid])
	{
		count++;
	}
	else if (target > array[mid])
	{
		BinarySearch(array, target, mid + 1, end);
	}
	else
	{
		BinarySearch(array, target, start, mid - 1);
	}
}