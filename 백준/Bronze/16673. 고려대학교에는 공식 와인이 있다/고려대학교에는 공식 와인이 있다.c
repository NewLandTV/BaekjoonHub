#include <stdio.h>

int main(void)
{
	int i;
	int c, k, p;
	int sum = 0;
	
	scanf("%d %d %d", &c, &k, &p);
	
	for (i = 0; i <= c; i++)
	{
		sum += k * i + p * i * i;
	}
	
	printf("%d", sum);
	
	return 0;
}