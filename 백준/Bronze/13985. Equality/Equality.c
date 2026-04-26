#include <stdio.h>

int main(void)
{
	int a, b, c;
	int r;
	char o, equality;
	
	scanf("%d %c %d %c %d", &a, &o, &b, &equality, &c);
	printf("%s", a + b == c ? "YES" : "NO");
	
	return 0;
}