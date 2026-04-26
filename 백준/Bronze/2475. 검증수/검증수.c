#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum = 0;
	
	for (i = 0; i < 5; scanf("%d", &n), sum += n * n, i++);
	
	printf("%d", sum % 10);
	
	return 0;
}