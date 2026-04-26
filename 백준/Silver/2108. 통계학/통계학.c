#include <stdio.h>
#include <math.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i, j;
	int n;
	int data[500000];
	int count[8001] = { 0, };
	int stack[8001] = { 0, };
	int stackCount = 0;
	int max = 0;
	int sameCount = 0;
	double mean = 0.0;
	int median;
	int mode;
	int range;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
		
		mean += data[i];
		count[data[i] + 4000]++;
	}
	
	qsort(data, n, sizeof(int), Compare);
	
	mean /= n;
	median = data[n >> 1];
	
	for (i = 0; i < 8001; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
		}
	}
	
	for (i = 0; i < 8001; i++)
	{
		if (count[i] == max)
		{
			sameCount++;
			stack[stackCount++] = i;
		}
	}
	
	mode = sameCount > 1 ? stack[1] - 4000 : stack[0] - 4000;
	range = data[n - 1] - data[0];
	
	printf("%d\n", (int)round(mean));
	printf("%d\n", median);
	printf("%d\n", mode);
	printf("%d", range);
	
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