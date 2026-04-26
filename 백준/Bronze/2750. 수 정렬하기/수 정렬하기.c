#include <stdio.h>

void QuickSort(int* data, int l, int r);

int main(void)
{
	int i;
	int n;
	int array[1000];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	QuickSort(array, 0, n - 1);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", array[i]);
	}
	
	return 0;
}

void QuickSort(int* data, int l, int r)
{
	int left = l;
	int right = r;
	int pivot = data[(left + right) >> 1];
	int temp;
	
	do
	{
		while (data[left] < pivot)
		{
			left++;
		}
		
		while (data[right] > pivot)
		{
			right--;
		}
		
		if (left <= right)
		{
			temp = data[left];
			data[left] = data[right];
			data[right] = temp;
			left++;
			right--;
		}
	}
	while (left <= right);
	
	if (l < right)
	{
		QuickSort(data, l, right);
	}
	
	if (left < r)
	{
		QuickSort(data, left, r);
	}
}