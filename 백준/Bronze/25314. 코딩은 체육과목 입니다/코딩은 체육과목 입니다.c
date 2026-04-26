#include <stdio.h>

int main(void)
{
	unsigned short i;
	unsigned short n;
	
	scanf("%u", &n);
	
	for (i = 0; i < (n >> 2); i++)
	{
		printf("long ");
	}
	
	printf("int");
	
	return 0;
}