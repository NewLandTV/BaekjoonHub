#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	if (n & 1)
	{
		printf("Either");
		
		return 0;
	}
	
	printf("%s", (n >> 1) & 1 ? "Odd" : "Even");
	
	return 0;
}