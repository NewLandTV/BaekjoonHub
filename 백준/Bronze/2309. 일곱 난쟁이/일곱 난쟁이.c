#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define COUNT 9

int Compare(const char* a, const char* b);

int main(void)
{
	int i, j, k;
	int h[COUNT];
	int sum = 0;
	
	for (i = 0; i < COUNT; i++)
	{
		scanf("%d", &h[i]);
		
		sum += h[i];
	}
	
	qsort(h, COUNT, sizeof(int), Compare);
	
	for (i = 0; i < COUNT; i++)
	{
		for (j = i + 1; j < COUNT; j++)
		{
			if (sum - h[i] - h[j] != 100)
			{
				continue;
			}
			
			for (k = 0; k < COUNT; k++)
			{
				if (k != i && k != j)
				{
					printf("%d\n", h[k]);
				}
			}
			
			return 0;
		}
	}
	
	return 0;
}

int Compare(const char* a, const char* b)
{
	return strcmp(a, b);
}