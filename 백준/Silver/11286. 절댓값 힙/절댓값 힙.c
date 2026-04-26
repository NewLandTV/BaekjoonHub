#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

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
	
	for (i = ++size; i != 1 && Abs(data) <= Abs(heap[i >> 1]); heap[i] = heap[i >> 1], i >>= 1)
	{
		if (Abs(data) == Abs(heap[i >> 1]) && data > 0)
		{
			break;
		}
	}
	
	heap[i] = data;
}

int Pop()
{
	if (size == 0)
	{
		return 0;
	}
	
	int parent = 1, child = 2;
	int data = heap[1], temp = heap[size--];
	
	while (child <= size)
	{
		if (child < size && Abs(heap[child]) >= Abs(heap[child + 1]))
		{
			if (Abs(heap[child]) == Abs(heap[child + 1]))
			{
				if (heap[child] > 0)
				{
					child++;
				}
			}
			else
			{
				child++;
			}
		}
		
		if (Abs(temp) <= Abs(heap[child]))
		{
			if (Abs(temp) == Abs(heap[child]))
			{
				if (temp < 0)
				{
					break;
				}
			}
			else
			{
				break;
			}
		}
		
		heap[parent] = heap[child];
		parent = child;
		child <<= 1;
	}
	
	heap[parent] = temp;
	
	return data;
}