#include <stdio.h>

int main(void)
{
	int b;
	int p;
	
	scanf("%d", &b);
	
	p = b * 5 - 400;
	
	printf("%d\n", p);
	
	if (p == 100)
	{
		printf("0");
		
		return 0;
	}
	
	printf("%d", p > 100 ? -1 : 1);
	
	return 0;
}