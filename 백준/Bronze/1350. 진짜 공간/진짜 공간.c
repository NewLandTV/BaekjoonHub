#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int files[50];
	long long clusterSize;
	long long total = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &files[i]);
	}
	
	scanf("%d", &clusterSize);
	
	for (i = 0; i < n; i++)
	{
		total += (files[i] + clusterSize - 1) / clusterSize;
	}
	
	printf("%lld", clusterSize * total);
	
	return 0;
}