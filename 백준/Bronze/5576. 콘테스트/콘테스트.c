#include <stdio.h>

void Sort(int* array);

int main(void)
{
	int i;
	int w[10];
	int k[10];
	int x, y;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &w[i]);
	}
	
	Sort(w);
	
	x = w[0] + w[1] + w[2];
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &k[i]);
	}
	
	Sort(k);
	
	y = k[0] + k[1] + k[2];
	
	printf("%d %d", x, y);
	
	return 0;
}

void Sort(int* array)
{
	int i, j;
	int temp;
	
	for (i = 9; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] < array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}