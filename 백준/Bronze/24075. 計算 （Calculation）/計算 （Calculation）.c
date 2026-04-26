#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub;
	
	scanf("%d %d", &a, &b);
	
	sum = a + b;
	sub = a - b;
	
	printf("%d\n", sum > sub ? sum : sub);
	printf("%d", sum > sub ? sub : sum);
	
	return 0;
}