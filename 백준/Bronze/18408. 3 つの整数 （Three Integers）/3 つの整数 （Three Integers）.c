#include <stdio.h>

int main(void)
{
	int a, b, c;
	int one = 0, two = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	one += a == 1;
	one += b == 1;
	one += c == 1;
	two += a == 2;
	two += b == 2;
	two += c == 2;
	
	printf("%d", one > two ? 1 : 2);
	
	return 0;
}