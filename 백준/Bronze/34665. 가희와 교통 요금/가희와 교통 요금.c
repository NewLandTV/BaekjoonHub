#include <stdio.h>

int main(void)
{
	char a[21];
	char b[21];
	
	scanf("%s", a);
	scanf("%s", b);
	printf("%d", strcmp(a, b) == 0 ? 0 : 1550);
	
	return 0;
}