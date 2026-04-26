#include <stdio.h>

void QuickSort(int* data, int l, int r);

int main(void)
{
	int i;
	int n, k;
	int x[1000];
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	
	QuickSort(x, 0, n - 1);
	printf("%d", x[n - k]);
	
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