#include <stdio.h>

int main(void)
{
	int a, d, k;
	
	scanf("%d %d %d", &a, &d, &k);
	
	if ((k - a) % d != 0 || (d > 0 && k < a) || (d < 0 && k > a))
	{
		printf("X");
		
		return 0;
	}
	
	printf("%d", (k - a) / d + 1);
	
	return 0;
}