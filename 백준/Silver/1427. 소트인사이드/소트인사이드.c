#include <stdio.h>
#include <string.h>

void Heapify(char* data, int n, int i);
void HeapSort(char* data, int n);

int main(void)
{
	char n[11];
	
	scanf("%s", &n);
	HeapSort(n, strlen(n));
	printf("%s", n);
	
	return 0;
}

void Heapify(char* data, int n, int i)
{
	int smallest = i;
	int left = i * 2 + 1;
	int right = left + 1;
	char temp;
	
	if (left < n && data[left] < data[smallest])
	{
		smallest = left;
	}
	
	if (right < n && data[right] < data[smallest])
	{
		smallest = right;
	}
	
	if (smallest == i)
	{
		return;
	}
	
	temp = data[i];
	data[i] = data[smallest];
	data[smallest] = temp;
	
	Heapify(data, n, smallest);
}

void HeapSort(char* data, int n)
{
	int i;
	char temp;
	
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