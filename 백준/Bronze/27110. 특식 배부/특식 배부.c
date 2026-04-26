#include <stdio.h>

#define Min(a, b) (a > b ? b : a)

int main(void)
{
	int n;
	int a, b, c;
	int result;
	
	scanf("%d", &n);
	scanf("%d %d %d", &a, &b, &c);
	
	result = Min(a, n);
	result += Min(b, n);
	result += Min(c, n);
	
	printf("%d", result);
	
	return 0;
}