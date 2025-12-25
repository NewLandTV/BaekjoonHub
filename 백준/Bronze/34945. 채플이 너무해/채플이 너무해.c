#include <stdio.h>

int main(void)
{
	int x;
	
	scanf("%d", &x);
	printf("%s!", x > 5 ? "Success" : "Oh My God");
	
	return 0;
}