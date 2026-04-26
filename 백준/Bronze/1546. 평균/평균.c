#include <stdio.h>

int main(void)
{
	int n, max, i;
	double score[1001] = { 0 };
	double sum = 0;
	double result = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &score[i]);
	}
	
	max = score[0];
	
	for (i = 0; i < n; i++)
	{
		if (score[i] > max)
		{
			max = score[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		sum += score[i] / max * 100;
	}
	
	result = sum / n;
	
	printf("%.8f", result);
	
	return 0;
}