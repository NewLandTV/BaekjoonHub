#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if ((a + b) % 12 == 0)
	{
		printf("12");
		
		return 0;
	}
	
	printf("%d", (a + b) % 12);
	
	return 0;
}