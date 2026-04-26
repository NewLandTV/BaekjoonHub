#include <stdio.h>
#include <stdlib.h>

typedef struct _Pair
{
	int first;
	int second;
} Pair;

void HeapifyFirst(Pair* data, int n, int i);
void HeapifySecond(Pair* data, int n, int i);
void HeapSortFirst(Pair* data, int n);
void HeapSortSecond(Pair* data, int n);

int main(void)
{
	int i;
	int n;
	Pair* x;
	int previous = 1000000001;
	int count = -1;
	
	scanf("%d", &n);
	
	x = (Pair*)malloc(sizeof(Pair) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i].first);
		
		x[i].second = i;
	}
	
	HeapSortFirst(x, n);
	
	for (i = 0; i < n; i++)
	{
		if (previous != x[i].first)
		{
			count++;
		}
		
		previous = x[i].first;
		x[i].first = count;
	}
	
	HeapSortSecond(x, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", x[i].first);
	}
	
	free(x);
	
	return 0;
}

void HeapifyFirst(Pair* data, int n, int i)
{
	int largest = i;
	int left = i * 2 + 1;
	int right = left + 1;
	Pair temp;
	
	if (left < n && data[left].first > data[largest].first)
	{
		largest = left;
	}
	
	if (right < n && data[right].first > data[largest].first)
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
	
	HeapifyFirst(data, n, largest);
}

void HeapifySecond(Pair* data, int n, int i)
{
	int largest = i;
	int left = i * 2 + 1;
	int right = left + 1;
	Pair temp;
	
	if (left < n && data[left].second > data[largest].second)
	{
		largest = left;
	}
	
	if (right < n && data[right].second > data[largest].second)
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
	
	HeapifySecond(data, n, largest);
}

void HeapSortFirst(Pair* data, int n)
{
	int i;
	Pair temp;
	
	for (i = (n >> 1) - 1; i >= 0; i--)
	{
		HeapifyFirst(data, n, i);
	}
	
	for (i = n - 1; i > 0; i--)
	{
		temp = data[0];
		data[0] = data[i];
		data[i] = temp;
		
		HeapifyFirst(data, i, 0);
	}
}

void HeapSortSecond(Pair* data, int n)
{
	int i;
	Pair temp;
	
	for (i = (n >> 1) - 1; i >= 0; i--)
	{
		HeapifySecond(data, n, i);
	}
	
	for (i = n - 1; i > 0; i--)
	{
		temp = data[0];
		data[0] = data[i];
		data[i] = temp;
		
		HeapifySecond(data, i, 0);
	}
}