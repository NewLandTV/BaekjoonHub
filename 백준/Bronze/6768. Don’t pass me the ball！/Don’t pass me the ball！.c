#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int c;
	
	scanf("%d", &j);
	
	for (i = c = 1; i <= 3; c *= j - i++);
	
	printf("%d", c / 6);
	
	return 0;
}