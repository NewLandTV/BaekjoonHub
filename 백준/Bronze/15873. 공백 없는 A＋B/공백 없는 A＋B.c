#include <stdio.h>

int main(void)
{
	int ab;
	
	scanf("%d", &ab);
	
	if (ab == 1010)
	{
		printf("20");
		
		return 0;
	}
	
	if (ab % 10 == 0)
	{
		printf("%d", ab / 100 + 10);
		
		return 0;
	}
	
	if (ab / 10 == 10)
	{
		printf("%d", ab % 10 + 10);
		
		return 0;
	}
	
	printf("%d", ab / 10 + ab % 10);
	
	return 0;
}