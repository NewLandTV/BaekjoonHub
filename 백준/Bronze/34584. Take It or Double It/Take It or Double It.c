#include <stdio.h>

int main(void)
{
	int x, d;
	
	scanf("%d %d", &x, &d);
	printf("%s it", x * 2 > d  ? "take" : "double");
	
	return 0;
}