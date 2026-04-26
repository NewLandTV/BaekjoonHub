#include <stdio.h>

int main(void)
{
	int i;
	int a;
	int sum = 0;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		
		sum += a;
	}
	
	printf("%d", sum);
	
	return 0;
}