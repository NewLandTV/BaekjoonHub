#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (a == b)
	{
		printf("0");
		
		return 0;
	}
	
	printf("%d", a < b ? -1 : 1);
	
	return 0;
}