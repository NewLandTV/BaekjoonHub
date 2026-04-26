#include <stdio.h>

int main(void)
{
	int n;
	int max;
	int result;
	
	scanf("%d", &n);
	
	for (max = 1, result = 1; max < n; max += result++ * 6);
	
	printf("%d", result);
	
	return 0;
}