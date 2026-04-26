#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%s", n & 1 ? "CY" : "SK");
	
	return 0;
}