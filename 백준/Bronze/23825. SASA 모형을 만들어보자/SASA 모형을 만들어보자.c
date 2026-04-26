#include <stdio.h>

#define Min(a, b) (a > b ? b : a)

int main(void)
{
	int n, m;
	int result;
	
	scanf("%d %d", &n, &m);
	
	result = Min(n >> 1, m >> 1);
	
	printf("%d", result);
	
	return 0;
}