#include <stdio.h>

int main(void)
{
	int i;
	int a, b;
	int sum = 1;
	
	scanf("%d %d", &a, &b);
	
	for (i = 0; i <= b - a; i++)
	{
		sum *= (a + i) * (a + i + 1) >> 1;
		sum %= 14579;
	}
	
	printf("%d", sum);
	
	return 0;
}