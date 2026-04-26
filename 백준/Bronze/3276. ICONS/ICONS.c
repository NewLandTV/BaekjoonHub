#include <stdio.h>

int main(void)
{
	int a, b;
	int n;
	
	scanf("%d", &n);
	
	for (a = 0, b = 0; a * b < n; a > b ? b++ : a++);
	
	printf("%d %d", a, b);
	
	return 0;
}