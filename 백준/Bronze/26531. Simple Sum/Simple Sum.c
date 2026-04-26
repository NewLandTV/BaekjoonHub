#include <stdio.h>

int main(void)
{
	int a, b, c;
	char op1, op2;
	
	scanf("%d %c %d %c %d", &a, &op1, &b, &op2, &c);
	printf("%s", a + b == c ? "YES" : "NO");
	
	return 0;
}