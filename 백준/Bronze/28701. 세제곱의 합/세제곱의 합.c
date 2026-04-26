#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum;
	int result = 0;
	
	scanf("%d", &n);
	
	sum = n * (n + 1) >> 1;
	
	for (i = 1; i <= n; result += i * i * i++);
	
	printf("%d\n", sum);
	printf("%d\n", sum * sum);
	printf("%d", result);
	
	return 0;
}