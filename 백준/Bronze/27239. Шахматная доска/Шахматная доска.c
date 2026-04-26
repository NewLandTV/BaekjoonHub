#include <stdio.h>

int main(void)
{
	int n;
	char c;
	int a;
	
	scanf("%d", &n);
	
	n--;
	
	c = n % 8 + 'a';
	a = n / 8 + 1;
	
	printf("%c%d", c, a);
	
	return 0;
}