#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	int r;
	int mean = 0;
	int* data;
	
	scanf("%d", &n);
	
	if (n == 0)
	{
		putchar('0');
		
		return 0;
	}
	
	r = round(n * 15 / 100.0f);
	
	data = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	
	qsort(data, n, sizeof(int), Compare);
	
	for (i = r; i < n - r; i++)
	{
		mean += data[i];
	}
	
	free(data);
	printf("%d", (int)round(mean / (n - r * 2.0f)));
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	
	if (n1 == n2)
	{
		return 0;
	}
	
	return n1 > n2 ? 1 : -1;
}