#include <stdio.h>

int main(void)
{
	int n, m, k;
	int min, max;
	
	scanf("%d %d %d", &n, &m, &k);
	
	min = n - (m * k);
	max = n - (m * (k - 1) + 1);
	
	printf("%d %d", min < 0 ? 0 : min, max < 0 ? 0 : max);
	
	return 0;
}