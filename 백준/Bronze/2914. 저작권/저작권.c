#include <stdio.h>

int main(void)
{
	int a, i;
	
	scanf("%d %d", &a, &i);
	printf("%d", a * i - a + 1);
	
	return 0;
}