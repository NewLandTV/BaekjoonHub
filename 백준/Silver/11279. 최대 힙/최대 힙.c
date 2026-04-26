#include <stdio.h>

#define MAX_ELEMENT 100000

int size;
int heap[MAX_ELEMENT];

void Insert(int data);
int Pop();

int main(void)
{
	int n;
	int x;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &x);
		
		if (x == 0)
		{
			printf("%d\n", Pop());
		}
		else
		{
			Insert(x);
		}
	}
	
	return 0;
}

void Insert(int data)
{
	int i;
	
	for (i = ++size; i != 1 && data > heap[i >> 1]; i >>= 1)
	{
		heap[i] = heap[i >> 1];
	}
	
	heap[i] = data;
}

int Pop()
{
	if (size == 0)
	{
		return 0;
	}
	
	int parent, child;
	int data, temp;
	
	data = heap[1];
	temp = heap[size--];
	parent = 1;
	child = 2;
	
	while (child <= size)
	{
		if (child < size && heap[child] < heap[child + 1])
		{
			child++;
		}
		
		if (temp >= heap[child])
		{
			break;
		}
		
		heap[parent] = heap[child];
		parent = child;
		child <<= 1;
	}
	
	heap[parent] = temp;
	
	return data;
}