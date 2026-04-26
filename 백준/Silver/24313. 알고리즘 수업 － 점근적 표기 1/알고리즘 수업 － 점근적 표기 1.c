#include <stdio.h>

int main(void)
{
	int a1, a0;
	int c;
	int n0;
	
	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);
	printf("%d", a1 * n0 + a0 <= c * n0 && a1 <= c);
	
	return 0;
}