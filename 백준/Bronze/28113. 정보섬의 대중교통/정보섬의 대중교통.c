#include <stdio.h>

int main(void)
{
	int n, a, b;
	
	scanf("%d %d %d", &n, &a, &b);
	
	if (a == b)
	{
		printf("Anything");
		
		return 0;
	}
	
	printf("%s", a < b ? "Bus" : "Subway");
	
	return 0;
}