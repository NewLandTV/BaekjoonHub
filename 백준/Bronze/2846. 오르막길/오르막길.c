#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int p[1001];
	int slope, total = 0;
	int max = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	
	for (i = 0; i < n - 1; i++)
	{
		slope = p[i + 1] - p[i];
		
		if (slope <= 0)
		{
			total = 0;
			
			continue;
		}
		
		total += slope;
		
		if (max < total)
		{
			max = total;
		}
	}
	
	printf("%d", max);
	
	return 0;
}