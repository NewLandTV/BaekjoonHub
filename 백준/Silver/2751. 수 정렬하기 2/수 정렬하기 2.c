#include <stdio.h>
#include <memory.h>

void Heapify(int* data, int n, int i);
void HeapSort(int* data, int n);

int main(void)
{
	int i;
	int n;
	int* data;
	
	scanf("%d", &n);
	
	data = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	
	HeapSort(data, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", data[i]);
	}
	
	free(data);
	
	return 0;
}

void Heapify(int* data, int n, int i)
{
	int largest = i;
	int left = i * 2 + 1;
	int right = left + 1;
	int temp;
	
	if (left < n && data[left] > data[largest])
	{
		largest = left;
	}
	
	if (right < n && data[right] > data[largest])
	{
		largest = right;
	}
	
	if (largest == i)
	{
		return;
	}
	
	temp = data[i];
	data[i] = data[largest];
	data[largest] = temp;
	
	Heapify(data, n, largest);
}

void HeapSort(int* data, int n)
{
	int i;
	int temp;
	
	for (i = (n >> 1) - 1; i >= 0; i--)
	{
		Heapify(data, n, i);
	}
	
	for (i = n - 1; i > 0; i--)
	{
		temp = data[0];
		data[0] = data[i];
		data[i] = temp;
		
		Heapify(data, i, 0);
	}
}