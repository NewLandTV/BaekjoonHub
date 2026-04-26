#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d", a + b + c <= 21);
	
	return 0;
}